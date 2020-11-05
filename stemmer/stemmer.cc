#include "stemmer.h"

namespace stemmer {

namespace {

bool IsVowel(const char ch) noexcept
{
    return ch == 'а' or
        ch == 'е' or
        ch == 'ё' or
        ch == 'и' or
        ch == 'о' or
        ch == 'у' or
        ch == 'э' or
        ch == 'ю' or
        ch == 'я';
}

} // anonymous namespace

std::string stem_ru_string(const std::string& word)
{
    return {};
}

} // namespace stemmer
