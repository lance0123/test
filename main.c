#include <stdio.h>
#include <sys/time.h>
#include <stdint.h>
int main(void) 
{
    struct timeval tv;
    gettimeofday(&tv, (struct timezone *)NULL);
    long long now = (int64_t)(tv.tv_sec * 1000 )+ tv.tv_usec /1000 ;
    long long timestamp = now;
    printf("--lzg--now %ld  %ld %ld  %ld  %ld\n", tv.tv_sec * 8, tv.tv_sec * 10,tv.tv_sec * 100,tv.tv_sec * 1000, tv.tv_usec / 1000 );
    printf("lzg  tv.tv_sec %ld  tv.tv_usec %ld  now %lld tinestamp %lld \n", tv.tv_sec,tv.tv_usec, now, timestamp);
    return 0;
}
