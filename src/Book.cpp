#include <stdexcept>

#include "../includes/Book.hpp"

Book::Book(const std::string &title, int quantity)
{
    this->setTitle(title);
    this->setQuantity(quantity);
}

Book::Book(int barcode,const std::string &title, int edition,const std::string &author,const std::string &category,const std::string &publisher,const std::string &language, int quantity)
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

void Book::isValid(int value) const
{
    if (value < 0)
    {
        throw std::invalid_argument(std::to_string(value) + " is not valid");
    }
}
void Book::isValid(const std::string &value) const
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
void Book::setTitle(const std::string &title)
{
    isValid(title);
    this->title = title;
}
void Book::setAuthor(const std::string &author)
{
    isValid(author);
    this->author = author;
}
void Book::setCategory(const std::string &category)
{
    isValid(category);
    this->category = category;
}
void Book::setPublisher(const std::string &publisher)
{
    isValid(publisher);
    this->publisher = publisher;
}
void Book::setLanguage(const std::string &language)
{
    isValid(language);
    this->language = language;
}

int Book::getBarcodeNo() const
{
    return barcodeNo;
}
int Book::getQuantity() const
{
    return quantity;
}
int Book::getEdition() const
{
    return edition;
}

std::string Book::getTitle() const
{
    return title;
}
std::string Book::getAuthor() const
{
    return author;
}
std::string Book::getCategory() const
{
    return category;
}
std::string Book::getPublisher() const
{
    return publisher;
}
std::string Book::getLanguage() const
{
    return language;
}