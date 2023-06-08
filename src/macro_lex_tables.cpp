#include "macro_lex_tables.hpp"
namespace macro_lex
{
extern unsigned const lexer_ec_table[256] = {
    0, 49, 49, 49, 49, 49, 49, 49, 49, 49, 98, 49, 49, 147, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 196, 245, 49, 49, 49, 294, 49, 49, 343, 49, 49, 49, 49, 392,
    441, 441, 441, 441, 441, 441, 441, 441, 441, 441, 490, 49, 49, 49, 49, 49,
    49, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539,
    539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 49, 49, 49, 49, 441,
    588, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637,
    637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
};
extern token_type_t const lexer_transition_table[686] = {

    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 2, 48,
    0, 0, 0, 26, 0, 0, 0, 0, 4, 25, 1, 3, 0, 0, 0, 5,
    10, 0, 0, 0, 11, 0, 0, 0, 9, 0, 0, 0, 8, 5, 25, 6,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 2,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 4, 25, 1, 3, 0, 0, 0,
    5, 10, 0, 0, 0, 11, 0, 0, 0, 9, 0, 0, 0, 8, 5, 25,
    6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    2, 45, 0, 0, 0, 0, 0, 0, 0, 0, 4, 25, 1, 3, 0, 0,
    0, 48, 10, 0, 0, 0, 11, 0, 0, 0, 9, 0, 0, 0, 8, 5,
    25, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 2, 31, 0, 0, 0, 0, 0, 0, 0, 0, 4, 25, 1, 3, 0,
    0, 0, 5, 10, 0, 0, 0, 11, 0, 0, 0, 9, 0, 0, 0, 8,
    48, 25, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 2, 15, 0, 0, 0, 27, 0, 0, 0, 0, 4, 25, 1, 3,
    20, 0, 0, 5, 10, 0, 0, 0, 11, 0, 0, 0, 9, 43, 43, 0,
    8, 5, 25, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 7, 2, 15, 13, 0, 0, 28, 0, 0, 0, 0, 4, 25, 1,
    3, 0, 0, 32, 5, 10, 0, 0, 36, 11, 0, 0, 40, 9, 0, 0,
    44, 8, 5, 25, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 2, 15, 0, 0, 0, 24, 0, 0, 0, 0, 4, 25,
    1, 3, 21, 0, 0, 5, 10, 0, 0, 0, 11, 39, 39, 0, 9, 0,
    0, 0, 8, 5, 25, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 2, 15, 0, 0, 25, 0, 0, 0, 0, 0, 4,
    46, 1, 3, 0, 0, 0, 5, 10, 0, 0, 0, 11, 0, 0, 0, 9,
    0, 0, 0, 8, 5, 25, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 2, 15, 0, 0, 15, 18, 0, 0, 0, 0,
    4, 25, 1, 3, 0, 0, 0, 5, 10, 0, 0, 0, 11, 0, 0, 0,
    9, 0, 0, 0, 8, 5, 47, 6, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 7, 2, 15, 16, 17, 0, 0, 0, 0, 0,
    0, 4, 25, 1, 3, 0, 29, 0, 5, 10, 33, 34, 0, 11, 37, 38,
    0, 9, 41, 42, 0, 8, 5, 25, 6, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 2, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 25, 1, 3, 22, 0, 0, 5, 10, 35, 35, 0, 11, 0,
    0, 0, 9, 0, 0, 0, 8, 5, 25, 6, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 2, 15, 16, 17, 0, 0, 41,
    37, 33, 17, 4, 25, 1, 3, 16, 0, 0, 5, 10, 33, 0, 0, 11,
    37, 0, 0, 9, 41, 0, 0, 8, 5, 25, 6, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 2, 15, 0, 30, 0, 14,
    0, 0, 0, 0, 4, 25, 1, 3, 23, 30, 0, 5, 10, 0, 0, 0,
    11, 0, 0, 0, 9, 0, 0, 0, 8, 5, 25, 6, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 7, 2, 15, 0, 0, 0,
    0, 42, 38, 34, 29, 4, 25, 1, 3, 12, 29, 0, 5, 10, 0, 34,
    0, 11, 0, 38, 0, 9, 0, 42, 0, 8, 5, 25, 6, 5,
};
} // namespace macro_lex
