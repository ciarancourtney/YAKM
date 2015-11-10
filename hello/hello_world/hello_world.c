#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
        long int hello_world_call = syscall(545);
        printf("Hello_world returned %ld\n", hello_world_call);
        return 0;
}

