
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

#ifndef GDX_CPP_GRAPHICS_G2D_TILED_TILEMAPRENDERER_HPP_
#define GDX_CPP_GRAPHICS_G2D_TILED_TILEMAPRENDERER_HPP_

namespace gdx_cpp {
namespace graphics {
namespace g2d {
namespace tiled {

class TileMapRenderer: public gdx_cpp::utils::Disposable {
public:
    void render ();
    void render (float x,float y,float width,float height);
    void render (const gdx_cpp::graphics::OrthographicCamera& cam);
    void render (const gdx_cpp::graphics::OrthographicCamera& cam);
    void render (float x,float y,float width,float height);
    gdx_cpp::math::Matrix4& getProjectionMatrix ();
    gdx_cpp::math::Matrix4& getTransformMatrix ();
    int getRow (int worldY);
    int getCol (int worldX);
    int getInitialRow ();
    int getInitialCol ();
    int getLastRow ();
    int getLastCol ();
    float getUnitsPerTileX ();
    float getUnitsPerTileY ();
    int getMapHeightUnits ();
    int getMapWidthUnits ();
    void dispose ();

protected:


private:
    void init (const TileAtlas& atlas,int tileWidth,int tileHeight,float unitsPerTileX,float unitsPerTileY,const gdx_cpp::utils::IntArray& blendedTiles,int tilesPerBlockX,int tilesPerBlockY,const gdx_cpp::graphics::glutils::ShaderProgram& shader);
    int addBlock (int blockRow,int blockCol,bool blended);
    int getLayerWidthInBlocks (int layer,int row);
    int getLayerHeightInBlocks (int layer);
    static int parseIntWithDefault (const std::string& string,int defaultValue);
    static gdx_cpp::utils::IntArray& createFromCSV (const std::string& values);
};

} // namespace gdx_cpp
} // namespace graphics
} // namespace g2d
} // namespace tiled

#endif // GDX_CPP_GRAPHICS_G2D_TILED_TILEMAPRENDERER_HPP_
