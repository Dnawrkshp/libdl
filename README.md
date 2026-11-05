# libdl

Small C library for developing integrated programs for Ratchet Deadlocked PS2

## Building

libdl targets the legacy EE GCC 3.2.3 toolchain bundled with `ps2dev/ps2dev:v1.2.0`, matching the Dockerfile. Use this pinned image when building; the assembly uses its legacy register syntax.

### Grab the pinned ps2dev Docker image

```docker pull ps2dev/ps2dev:v1.2.0```

### Clone and enter the repo

```git clone https://github.com/Dnawrkshp/libdl.git && cd libdl```

### Launch a new docker container with the current directory mounted

```docker run -it --rm -v "$PWD:/src" ps2dev/ps2dev:v1.2.0```

### Add make

```apk add make```

### Enter mounted directory

```cd /src```

### Build

```make```

## Installing

You can run ```make install``` to install the library into your local PS2SDK lib folder.

## Testing

I have a few sample tests that make use of the library to do simple things. You can build these individually by ```cd```ing into the target /test/ directory and running ```make```
