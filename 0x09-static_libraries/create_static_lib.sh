#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c

#!/bin/bash
ar -rc  liball.a *.o

#!/bin/bash
ranlib liball.o
