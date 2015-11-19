#include <stdio.h>
#include <linux/unistd.h>
#include <sys/syscall.h>
#define sys_adder 546

int main(void)
{
    int a,b,c;
    printf("To add a + b, please enter a: ");
    scanf("%d",&a);
    printf("Now enter b: ");
    scanf("%d", &b);
    c = syscall(sys_adder, a, b);
    printf("The sum of a + b equals %d\n", c);
    return 0;
}

