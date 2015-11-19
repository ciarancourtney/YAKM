#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
        long int writer_call = syscall(547);
        printf("writer returned %ld\n", writer_call);
        return 0;
}

