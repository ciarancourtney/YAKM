#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
        long int adder_call = syscall(546);
        printf("adder returned %ld\n", adder_call);
        return 0;
}
