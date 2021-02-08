# 6502 Emulator

## Usage

### Setup
This will build cmake files and download dependencies
```bash
make setup
```

### Build
```bash
# Debug build
make debug
# Release build
make release
```

### Run Tests
This will build and run unity tests
```bash
make test
```

### Clean
This will delete generated files for debug and release
```bash
make clean
```

### Run Binary
```bash
# Debug bin
./build/debug/bin/main_app
# Release bin
./build/release/bin/main_app
```

## Installing Dependencies

#### Arch Linux
```bash
pacman -Sy clang cmake sdl2
```

#### Ubuntu
```bash
sudo add-apt-repository -y "deb http://archive.ubuntu.com/ubuntu `lsb_release -sc` main universe restricted multiverse"
sudo apt-get update -y -qq
sudo apt-get install clang cmake libsdl2-dev
```

## License
This is free and unencumbered software released into the public domain
For more information, please refer to <http://unlicense.org/>