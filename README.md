# WiringPi-Sim 

![CI](https://github.com/iwishiwasaneagle/WiringPi-Sim/workflows/CI/badge.svg) 
![Docs](https://github.com/iwishiwasaneagle/wiringPi-mock/workflows/Docs/badge.svg)

 > Continuation of [dotsha747](https://github.com/dotsha747/WiringPi-Sim) due to inactivity. I needed a few more wiringPi functions, such as `wiringPiISR`, and as such decided to revamp this repo.

WiringPi is an excellent library for accessing GPIO and other hardware on the
Raspberry Pi, written by Gordon Henderson (http://wiringpi.com). When using it
I often would like to compile and test my program on my desktop ubuntu system, 
before finally porting it to the Pi. Sadly wiringPi doesn't run on non-rpi PCs. 

## Installation

```bash
cd [YOUR DESIRED INSTALL DIR (such as /opt)]
git clone https://github.com/iwishiwasaneagle/wiringPi-sim
cd wiringPi-sim
sudo ./install.sh
```

To uninstall `cd` into `_build` and run `sudo make uninstall`.

## Usage

The sole purpose of this library is to simulate wiringPi. As such, just use it like wiringPi. For examples on how to use, visit the [examples](./examples) folder.

## Documentation

```bash
doxygen
firefox docs/index.html
``` 
