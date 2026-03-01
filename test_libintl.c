#include <stdio.h>
#include <libintl.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    bindtextdomain("test", ".");
    textdomain("test");
    printf("Test message: %s\n", gettext("Hello, world!"));
    return 0;
}
