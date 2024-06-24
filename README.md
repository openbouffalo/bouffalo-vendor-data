# Bouffalo Vendor Data

This repository inspired by [stm32-data](https://github.com/embassy-rs/stm32-data) contains machine peripheral registers, memory maps, and much more for Bouffalo chips in YAML format, generated/parsed from Bouffalo SDKs, tools sources and documentation. This serves only as reference of the data provided in vendor's code and documentation. All improvements, cleanups and fixes are done in community maintained [bouffalo-data](https://github.com/openbouffalo/bouffalo-data) repository.

Data are parsed with [bouffalo-data-parser](https://github.com/openbouffalo/bouffalo-data-parser) tools.

**Please note**, that there are inconsistencies in data between source code and documentation (all documented in `inconsistencies.txt` in chip folder), but this repo doesn't aim to fix them. If you find any, please open a pull-request on [bouffalo-data](https://github.com/openbouffalo/bouffalo-data) repository, which contains community maintained and polished data for the chips.