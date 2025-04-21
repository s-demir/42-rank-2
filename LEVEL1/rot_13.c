#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int rot;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
            {
                rot = argv[1][i] + 13; // 'a' ile 'm' arasında 13 ekle
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
            {
                rot = argv[1][i] + 13; // 'A' ile 'M' arasında 13 ekle
            }
            else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
            {
                rot = argv[1][i] - 13; // 'n' ile 'z' arasında 13 çıkar
            }
            else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
            {
                rot = argv[1][i] - 13; // 'N' ile 'Z' arasında 13 çıkar
            }
            else
            {
                rot = argv[1][i]; // Harf değilse, olduğu gibi yazdır
            }
            write(1, &rot, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
