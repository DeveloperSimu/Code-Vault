#include <stdio.h>

int main()
{
    char *code =
        "#include <stdio.h>\n"
        "\n"
        "int main()\n"
        "{\n"
        "    char *code = ...;\n"
        "    printf(\"%%s\", code);\n"
        "    return 0;\n"
        "}\n";

    printf("%s", code);

    return 0;
}