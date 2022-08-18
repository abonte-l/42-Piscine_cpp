#define MAIN_S "TESTS SUJET"
#define MAIN_A "TESTS AJOUT"

#define MIN "TEST MIN"
#define INCR_DECR "TEST INCR/DECR"
#define ARITH "TEST ARITHMETIC"
#define LOGIC "TEST LOGICAL"

#define INFO_TM	"\033[3mLe test du min est par rapport aux tests du main du sujet (donc les nombres au dessus de \"TESTS AJOUT\")\033[0;1m"

#define TEST_SUP "\033[1;32ma2 < b1 ou a2 > b1\033[0;1m"
#define TEST_INF "\033[1;33mb1 < a2 ou b1 > a2\033[0;1m"
#define TEST_INF_EQU "\033[1;34mc <= a2 ou b1 >= a2\033[0;1m"
#define TEST_SUP_EQU "\033[1;32md <= a2 ou a2 >= c\033[0;1m"
#define TEST_STRICT_EQU "\033[1;33md <= a2 ou a2 == c\033[0;1m"
#define TEST_NOT_EQU "\033[1;34md != a2 ou a2 >= d\033[0;1m"


#define ADD "\033[1;32ma2 + b1\033[0;1m"
#define SUB "\033[1;33ma2 - b1\033[0;1m"
#define MUL "\033[1;34ma2 * b1\033[0;1m"
#define DIV "\033[1;31ma2 / b1\033[0;1m"