
/*
    Copyright 2011 Aevum Software aevum @ aevumlab.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
    @author Ozires Bortolon de Faria ozires@aevumlab.com
*/

#include "PixmapTextureData.hpp"

using namespace gdx_cpp::graphics::glutils;

bool PixmapTextureData::disposePixmap () {
    return disposePixmap;
}

gdx_cpp::graphics::Pixmap& PixmapTextureData::getPixmap () {
    return pixmap;
}

int PixmapTextureData::getWidth () {
    return pixmap.getWidth();
}

int PixmapTextureData::getHeight () {
    return pixmap.getHeight();
}

gdx_cpp::graphics::Pixmap::Format& PixmapTextureData::getFormat () {
    return format;
}

bool PixmapTextureData::useMipMaps () {
    return useMipMaps;
}

bool PixmapTextureData::isManaged () {
    return false;
}

TextureDataType& PixmapTextureData::getType () {
    return TextureDataType.Pixmap;
}

void PixmapTextureData::uploadCompressedData () {
    throw new GdxRuntimeException("This TextureData implementation does not upload data itself");
}

