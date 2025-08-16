# For information
https://docs.qmk.fm/keycodes_basic

python3 -m pip install --user qmk

# To set up environment

From root dir:

```
python3 -m venv .venv
source .venv/bin/activate
pip3 install -r requirements.txt
python3 -m pip install qmk
qmk setup
```
# Make edits to keymap.c
vim keyboards/kinesis/keymaps/bebtio/keymap.c

# To build
```
qmk compile -kb kinesis/kint41 -km bebtio 
```

# To flash
Press reset button first and then:
```
qmk flash -kb kinesis/kint41 -km bebtio
```