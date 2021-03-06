/*
 * filedatafactory.hpp
 *
 *  Created on: Sep 16, 2013
 *      Author: leoz
 */

#ifndef FILEDATAFACTORY_HPP_
#define FILEDATAFACTORY_HPP_

#include <QUrl>

class FileData;

struct FileDataFactory {
    static FileData* create(const QUrl& url);
    static bool isImage(const QUrl& url);
    static bool isSupportedImage(const QUrl& url);

private:
    static void setImageExts();

    // All image formats
    static QStringList m_image_ext_list;
    // System supported image formats
    static QStringList m_image_sys_list;
    // Image formats supported by ImageMagick
    static QStringList m_image_sup_list;
    // Unsupported image formats
    static QStringList m_image_uns_list;
};


#endif /* FILEDATAFACTORY_HPP_ */
