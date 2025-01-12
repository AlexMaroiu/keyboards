# alexmacropad

![alexnumpad](https://i.imgur.com/v8FVYux.jpeg)

*A short description of the keyboard/project*

* Keyboard Maintainer: [AlexMaroiu](https://github.com/AlexMaroiu)
* Hardware Supported: Hand-wired with official raspberry pi pico
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb alexnumpad/rev1 -km default

Flashing example for this keyboard:

    qmk flash -kb alexanumpad/rev1 -km via

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead (it is unaccesible due to fact that the board is under the plate.)
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available (second layer onthe encoder)

## VIA

add the via.json in the design tab in usevia.app and then you can modify the keys.