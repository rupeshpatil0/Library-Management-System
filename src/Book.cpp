#include <stdexcept>

#include "../includes/Book.hpp"

Book::Book(std::string title, int quantity)
{
    this->setTitle(title);
    this->setQuantity(quantity);
}

Book::Book(int barcode, std::string title, int edition, std::string author, std::string category, std::string publisher, std::string language, int quantity)
{
    this->setBarcodeNo(barcode);
    this->setTitle(title);
    this->setQuantity(quantity);
    this->setAuthor(author);
    this->setEdition(edition);
    this->setCategory(category);
    this->setPublisher(publisher);
    this->setLanguage(language);
}

void Book::isValid(int value)
{
    if (value < 0)
    {
        throw std::invalid_argument(std::to_string(value) + " is not valid");
    }
}
void Book::isValid(std::string value)
{
    if (value == "")
    {
        throw std::invalid_argument(value + " is not valid");
    }
}

void Book::setBarcodeNo(int barcodeNo)
{
    isValid(barcodeNo);
    this->barcodeNo = barcodeNo;
}
void Book::setQuantity(int quantity)
{
    isValid(quantity);
    this->quantity = quantity;
}
void Book::setEdition(int edition)
{
    isValid(edition);
    this->edition = edition;
}
void Book::setTitle(std::string title)
{
    isValid(title);
    this->title = title;
}
void Book::setAuthor(std::string author)
{
    isValid(author);
    this->author = author;
}
void Book::setCategory(std::string category)
{
    isValid(category);
    this->category = category;
}
void Book::setPublisher(std::string publisher)
{
    isValid(publisher);
    this->publisher = publisher;
}
void Book::setLanguage(std::string language)
{
    isValid(language);
    this->language = language;
}

int Book::getBarcodeNo()
{
    return barcodeNo;
}
int Book::getQuantity()
{
    return quantity;
}
int Book::getEdition()
{
    return edition;
}

std::string Book::getTitle()
{
    return title;
}
std::string Book::getAuthor()
{
    return author;
}
std::string Book::getCategory()
{
    return category;
}
std::string Book::getPublisher()
{
    return publisher;
}
std::string Book::getLanguage()
{
    return language;
}