#include "./inc/libasm.h"

# define STRLEN(x)			printf("\"%s\"\n" GREEN "%ld" RESET " | " YELLOW "%ld" RESET "\n", x, ft_strlen(x), strlen(x));
# define STRCPY(a, b)		printf("\"" GREEN "%s" RESET "\" | \"" YELLOW "%s" RESET "\"\n", ft_strcpy(a, b), strcpy(a, b));
# define STRCMP(a, b)		printf("\"%s\" : \"%s\"\n" GREEN "%d" RESET " | " YELLOW "%d" RESET "\n", a, b, ft_strcmp(a, b), strcmp(a, b));
# define STRDUP(x)			printf("\"%s\"\n\"" GREEN "%s" RESET "\" | \"" YELLOW "%s" RESET "\"\n", x, ft_strdup(x), strdup(x));
# define WRITE(fd, buf, count) printf(GREEN "%ld" RESET " | " YELLOW "%ld" RESET "\n\n", ft_write(fd, buf, count), write(fd, buf, count));
# define READ(fd, size, count) printf(GREEN "%ld" RESET " | " YELLOW "%ld" RESET "\n\n", ft_read(fd, size, count), read(fd, size, count));

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
	char source1[] = "Hello, world!";
    char destination1[20];
	char source2[] = "Testing strcpy implementation";
    char destination2[30];
	char source3[] = "";
    char destination3[10];
	char source4[] = "!@#$%^&*()_+";
    char destination4[30];
	char source5[] = "Testing strcpy destination string is smaller than source string";
    char destination5[20];
	char source6[] = "Testing strcpy destination string is bigger than source string";
    char destination6[70];

	printf(CYAN "\n\t\t*** STRCPY ***\n" RESET);
	STRCPY(destination1, source1)
	STRCPY(destination2, source2)
	STRCPY(destination3, source3)
	STRCPY(destination4, source4)
	STRCPY(destination5, source5)
	STRCPY(destination6, source6)
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

void strcmp_test() {
	printf(CYAN "\n\t\t*** STRCMP ***\n" RESET);
	STRCMP("Hello, world!", "Testing strcpy implementation")
	STRCMP("Hello, world!", "1234567890")
	STRCMP("Testing strcpy implementation", "1234567890")
	STRCMP("abcdefghijklmnopqrstuvwxyz", "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
	STRCMP("Special characters: !@#$%^&*()", "Special characters: !@#$%^&*()")
	STRCMP("Hello, world!", "Special characters: !@#$%^&*()")
	STRCMP("Hello, world!", "")
	STRCMP("", "")
	STRCMP("", "Hello, world!")
	STRCMP("Short", "Special characters: !@#$%^&*()")
	STRCMP("Equal strings", "Equal strings")
	STRCMP("Hello, world!", "Equal strings")
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

void strdup_test() {
	printf(CYAN "\n\t\t*** STRDUP ***\n" RESET);
	STRDUP("Hello, world!")
	STRDUP("Testing strdup implementation")
	STRDUP("1234567890")
	STRDUP("abcdefghijklmnopqrstuvwxyz")
	STRDUP("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
	STRDUP("Special characters: !@#$%^&*()")
	STRDUP("")
	STRDUP("a")
	STRDUP("Short")
	STRDUP("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet.")
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

void write_test() {
	printf(CYAN "\n\t\t*** WRITE ***\n" RESET);
	WRITE(1, "Hello, world!\n", 14)
	WRITE(1, "Testing strdup implementation\n", 31)
	WRITE(1, "1234567890\n", 11)
	WRITE(2, "abcdefghijklmnopqrstuvwxyz\n", 27)
	WRITE(2, "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n", 27)
	WRITE(1, "Special characters: !@#$%^&*()\n", 31)
	WRITE(1, "1234567890\n", 0)
	WRITE(1, "", 1)
	WRITE(1, "a\n", 2)
	WRITE(3, "Short\n", 7)
	WRITE(1, "Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet.\n", 501)
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

void read_test() {
	int		fd;
	char	buf[100];
	int		ret;

	printf(CYAN "\n\t\t*** READ ***\n" RESET);
	fd = open("osef", O_RDONLY);
	if (!fd) {
		printf(CYAN "Error: open failed\n" RESET);
		return ;
	}
	ret = READ(fd, buf, 50)
	ret = READ(fd, buf, 100)
	ret = READ(fd, buf, 1000)
	// ret = READ(fd, buf, -1)
	buf[ret] = '\0';
	close(fd);
	printf(CYAN "\n\t\t*** DONE ***\n" RESET);
}

int main() {
	printf(GREEN "My function" RESET "\n");
	printf(YELLOW "True function" RESET "\n");

	// strlen_test();		// OK
	// strcpy_test();		// OK
	// strcmp_test();		// OK
	// strdup_test();		// OK
	// write_test();		// OK
	read_test();

	return (0);
}