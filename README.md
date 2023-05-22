# reproduce instructions

Run these commands on Windows (I was on 10)
```bash
poetry install
poetry run conan build . -pr=Windows_profile --build=missing
```
the aqt-installer is called via the conanfile, you can switch the architecture there.

Note that on linux (clang), this compiles just fine.
