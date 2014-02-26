#include <QCoreApplication>
#include <vector>
#include <QDebug>

/**
 *  Печатает второй элемент контейнера
 */
template <typename C>
void print2nd(const C& container) {
    if (container.size() >= 2) {
        typename C::const_iterator iter(container.begin());

        ++iter;

        int value = *iter;
        qDebug() << value;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::vector<int> arr;
    arr.push_back(5);
    arr.push_back(7);

    print2nd(arr);

    return a.exec();
}
