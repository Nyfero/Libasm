#include "./inc/libasm.h"

# define STRLEN(x)			printf("%s = " GREEN "%ld" RESET " | " YELLOW "%ld" RESET "\n", x, ft_strlen(x), strlen(x));
# define STRCPY(a, b)		printf(GREEN "%s" RESET " | " YELLOW "%s" RESET "\n", ft_strcpy(a, b), strcpy(a, b));
# define STRCMP(a, b)		printf("%s:%s = " GREEN "%d" RESET " | " YELLOW "%d" RESET "\n", a, b, ft_strcmp(a, b), strcmp(a, b));
# define STRDUP(x)			printf("%s = " GREEN "%s" RESET " | " YELLOW "%s" RESET "\n", x, ft_strdup(x), strdup(x));
// # define READ(fd, size, count) printf("fd = " GREEN "%ld" RESET " | " YELLOW "%ld" RESET "\n", ft_read(fd, size, count), read(fd, size, count));

void strlen_test() {
	printf(CYAN "\n\t\t*** STRLEN ***\n" RESET);
	STRLEN("")
	STRLEN("Hi")
	STRLEN("Hello World !")
	STRLEN("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean lorem lectus, dignissim in ullamcorper vel, finibus sed odio. Nulla eu sollicitudin arcu, eget faucibus justo. Ut molestie, erat nec interdum pulvinar, risus nunc viverra quam, in mollis eros lectus finibus sapien. Donec eleifend at odio quis molestie. Etiam auctor euismod lorem vitae mollis. Sed eget tristique purus. Morbi interdum efficitur posuere. Cras scelerisque, nunc vitae mattis rhoncus, dui leo aliquet eros, quis consectetur tortor nisl ac nisi. Phasellus nec sapien massa. Nullam in tortor eu tortor ornare suscipit. Pellentesque id porttitor metus. Suspendisse et semper ex. Nulla facilisi. Sed commodo sagittis nibh, sed dapibus neque vulputate rutrum. Aliquam ultrices diam urna, at dapibus mauris auctor vel. Sed porta, sem ut vehicula efficitur, diam risus pulvinar dui, a molestie neque ante et tortor. Fusce nibh magna, porta id erat in, ornare varius felis. Pellentesque ac odio ultrices, porttitor dolor quis, vulputate tellus. Cras sed hendrerit neque, nec varius massa. Pellentesque eu lorem condimentum, dapibus sapien vitae, pretium magna. Curabitur varius eros in lectus facilisis ornare. Praesent vehicula turpis tellus, nec gravida justo volutpat nec. Sed sit amet sapien sem. Curabitur tincidunt, dolor sit amet congue lacinia, mi justo auctor magna, a iaculis purus nisl vel tellus. Proin malesuada lectus sed massa laoreet, quis imperdiet tellus sodales. Maecenas consequat neque quis tellus consectetur placerat. Interdum et malesuada fames ac ante ipsum primis in faucibus. Pellentesque tincidunt nulla eget semper dapibus. Cras odio libero, vulputate eu nisl vitae, gravida tempor tellus. Maecenas varius vel ipsum ut consequat. Duis pharetra lobortis risus, quis efficitur turpis ullamcorper id. Nunc porttitor tincidunt sapien, et pretium nisi dictum id. Mauris sed nulla vitae quam interdum semper. Nunc neque arcu, convallis ac lectus vel, semper lobortis ante. Sed sit amet sem augue. Nullam in accumsan neque, sed dapibus elit. Sed dignissim odio eu dui fringilla blandit. Suspendisse non ullamcorper ipsum. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Ut lectus massa, condimentum ac libero eget, imperdiet consequat enim. Fusce nec mollis turpis. Vestibulum semper metus sit amet interdum pharetra. Nunc auctor tortor ut leo maximus, vel pharetra quam ultrices. Sed aliquam, lacus vel tempus feugiat, risus justo molestie nulla, quis posuere sem lectus a metus. Aliquam consequat, neque eget placerat tincidunt, libero lacus vestibulum augue, imperdiet sagittis enim urna a neque. Vestibulum sagittis in quam sed porttitor. Sed vel nisl lorem. Mauris viverra augue et sollicitudin efficitur. Fusce metus nisl, ultricies et imperdiet quis, commodo nec eros. Donec gravida et nisi commodo congue. Duis convallis sodales nulla ac vulputate. Donec diam nisl, molestie nec feugiat sed, viverra et dolor. Mauris neque neque, vehicula id magna quis, malesuada blandit urna. Proin efficitur nulla a dapibus tristique. Cras et justo ornare, venenatis ex a, volutpat massa. Proin eros ligula, egestas ut lacinia non, pharetra vitae lectus. Ut at mi molestie, cursus erat sit amet, ornare turpis. Vestibulum ac maximus eros. Sed scelerisque nulla enim, nec aliquet lacus molestie dignissim. Fusce mi diam, consequat et pellentesque quis, interdum ut sapien. Sed accumsan dui pharetra, porta felis quis, commodo odio. Maecenas libero dui, pellentesque et elementum eget, aliquet eget diam.")
	STRLEN("42")
	STRLEN("0123456789")
	STRLEN("\\n")
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

void strcpy_test() {
	char	str1[0] = "";
	char	str2[3] = "HEY";
	char	str3[8] = "weshhhh";
	char	str4[2] = " ";
	char	str5[4] = "lol";
	char	str6[4] = "hih";
	char	str7[4] = "mdr";

	printf(CYAN "\n\t\t*** STRCPY ***\n" RESET);
	printf("%s : %s = ", str1, str2);
	STRCPY(str1, str2)
	printf("%s : %s = ", str3, str4);
	STRCPY(str3, str4)
	printf("%s : %s = ", str5, str6);
	STRCPY(str5, str6)
	printf("%s : %s = ", str6, str7);
	STRCPY(str6, str7)
	printf("%s : %s = ", str7, str4);
	STRCPY(str7, str4)
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

void strcmp_test() {
	printf(CYAN "\n\t\t*** STRCMP ***\n" RESET);
	STRCMP("", "")
	STRCMP("toto", "toto")
	STRCMP("", "toto")
	STRCMP("toto", "")
	STRCMP("toto", "totobar")
	STRCMP("totobar", "toto")
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

void strdup_test() {
	printf(CYAN "\n\t\t*** STRDUP ***\n" RESET);
	STRDUP("test12345");
	STRDUP("a");
	STRDUP("test");
	STRDUP("");
	STRDUP("\n");
	STRDUP("abc");
	STRDUP("asl;fjl;asdjfjkasdl;fjadjsf");
	STRDUP("abc\0abc");
	STRDUP("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet.");
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

// void read_test() {
// 	int		fd;
// 	char	buf[100];
// 	int		ret;

// 	printf(CYAN "\n\t\t*** READ ***\n" RESET);
// 	fd = open("Makefile", O_RDONLY);
// 	ret = READ(fd, buf, 100);
// 	buf[ret] = '\0';
// 	close(fd);
// 	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
// }

// void write_test() {
// 	int fd;
	
// }


int main() {
	printf(GREEN "My function" RESET "\n");
	printf(YELLOW "True function" RESET "\n");

	strlen_test();
	strcpy_test();
	// strcmp_test();
	// strdup_test();
	// read_test();

	const char* original = "Hello, World!";
    char* duplicated = ft_strdup(original);

    if (duplicated != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicated: %s\n", duplicated);

        // Clean up the allocated memory
        free(duplicated);
    } else {
        printf("Failed to allocate memory for duplication.\n");
    }
	return (0);
}