# Use a base image (e.g., Python)
FROM ps2dev/ps2dev:v1.2.0

# Set the working directory in the container
WORKDIR /

# Copy the current directory contents into the container at /src
COPY . /src

# Install any necessary dependencies
RUN apk add make git build-base

# Install libdl
RUN cd /src && make install

# Run init script
RUN cd /src && ./docker-init.sh

# Remove temp files
RUN cd / && rm -rf /src
