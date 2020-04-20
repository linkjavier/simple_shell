# SIMPLE SHELL IMPLEMENTATION IN C LANGUAGE.

![Simple_Shell](https://user-images.githubusercontent.com/54350108/79541720-f33f3900-804f-11ea-85f7-434f05be7b3e.png)

This project is about to run a simple shell, which belongs to a standard C language library. Simple Shell is an sh-compatible command language interpreter that executes commands read from the standard input or from a file.
```
user@Lenovo-ThinkPad-E470:~/Holberton/simple_shell$ ./hsh 
$ 
```
## How to use it 🔧
Firts you have to clone this repository.

This library contains all the prototypes functions that you will need to execute the simple_shell function

Then compile just like that:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## Testing
```
user@Lenovo-ThinkPad-E470:~/Holberton/simple_shell$ ./hsh 
$ /bin/ls -l /tmp
total 44
drwxrwxrwx 2 root       root       4096 Apr 16 20:43 anydesk
-rw------- 1 user       user       0 Apr 16 20:43 config-err-Tv8uP0
drwx------ 3 root       root       4096 Apr 16 22:43 snap.gimp
drwx------ 3 root       root       4096 Apr 16 21:07 snap.whatsdesk
drwx------ 2 user       user       4096 Apr 16 20:43 ssh-VIAtfCuzxXGP
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-ModemManager.service-6dCG2m
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-bolt.service-99Ligv
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-colord.service-2FOjfw
drwx------ 3 root       root       4096 Apr 16 20:44 systemd-private-ff8e9742e82f4dc4b606152975dca19c-fwupd.service-XcmV9c
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-rtkit-daemon.service-XEMiyL
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-systemd-resolved.service-I9gQzm
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-systemd-timesyncd.service-TnEXVm
$
```

## Development environment 🛠️
This project has been tested on Ubuntu 14.06.6 LTS

## Authors✒️
* Bryan Ortiz - student at Holberton School
* Javier Charria - student at Holberton School
