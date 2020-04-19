# SIMPLE SHELL IMPLEMENTATION IN C LANGUAGE.

![Simple_Shell](https://user-images.githubusercontent.com/54350108/79541720-f33f3900-804f-11ea-85f7-434f05be7b3e.png)

This project is about to run a simple shell, which belongs to a standard C language library. Its main function is to send a standard output according to the format, fomatting the past arguments and turning them into the arguments os a charracter string. For this project, the main function will be used as _printf to diffrentiate it from the original printf.
```
linkjavier@Javier-ThinkPad-E470:~/Holberton/simple_shell$ ./hsh 
$ 

```
##How to use it 🔧
Firts you have to add the holberton library. "shell.h"

This library contains all the prototypes functions that you will need to execute the simple_shell function

###Prototype: int simple_shell(......)

Then compile just like that:
gcc -Wall Wextra -Werror -pedantic -Wno-format *.c shell.h -o namefileExecutable

./"namefileExecutable"
```
linkjavier@Javier-ThinkPad-E470:~/Holberton/simple_shell$ ./hsh 
$ /bin/ls -l /tmp
total 44
drwxrwxrwx 2 root       root       4096 Apr 16 20:43 anydesk
-rw------- 1 linkjavier linkjavier    0 Apr 16 20:43 config-err-Tv8uP0
drwx------ 3 root       root       4096 Apr 16 22:43 snap.gimp
drwx------ 3 root       root       4096 Apr 16 21:07 snap.whatsdesk
drwx------ 2 linkjavier linkjavier 4096 Apr 16 20:43 ssh-VIAtfCuzxXGP
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-ModemManager.service-6dCG2m
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-bolt.service-99Ligv
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-colord.service-2FOjfw
drwx------ 3 root       root       4096 Apr 16 20:44 systemd-private-ff8e9742e82f4dc4b606152975dca19c-fwupd.service-XcmV9c
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-rtkit-daemon.service-XEMiyL
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-systemd-resolved.service-I9gQzm
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-systemd-timesyncd.service-TnEXVm
$
```
...
...
...

linkjavier@Javier-ThinkPad-E470:~/Holberton/simple_shell$ ./hsh 
$ /bin/ls -l /tmp
total 44
drwxrwxrwx 2 root       root       4096 Apr 16 20:43 anydesk
-rw------- 1 linkjavier linkjavier    0 Apr 16 20:43 config-err-Tv8uP0
drwx------ 3 root       root       4096 Apr 16 22:43 snap.gimp
drwx------ 3 root       root       4096 Apr 16 21:07 snap.whatsdesk
drwx------ 2 linkjavier linkjavier 4096 Apr 16 20:43 ssh-VIAtfCuzxXGP
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-ModemManager.service-6dCG2m
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-bolt.service-99Ligv
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-colord.service-2FOjfw
drwx------ 3 root       root       4096 Apr 16 20:44 systemd-private-ff8e9742e82f4dc4b606152975dca19c-fwupd.service-XcmV9c
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-rtkit-daemon.service-XEMiyL
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-systemd-resolved.service-I9gQzm
drwx------ 3 root       root       4096 Apr 16 20:43 systemd-private-ff8e9742e82f4dc4b606152975dca19c-systemd-timesyncd.service-TnEXVm
$
```
Hola
```

```
## Development environment 🛠️
This project has been tested on Ubuntu 14.06.6 LTS

* The tests are carried out in [virtualBox](https://www.virtualbox.com)
* Development environment manager [vagrant](https://www.vagrantup.com)
...

##Authors✒️
* Bryan Ortiz - student at Holberton School
* Javier Charria - student at Holberton School
