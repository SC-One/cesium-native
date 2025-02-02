#pragma once

#include "Cesium3DTilesSelection/BoundingVolume.h"
#include "Cesium3DTilesSelection/Library.h"
#include "Cesium3DTilesSelection/TileContentLoadResult.h"
#include "Cesium3DTilesSelection/TileContentLoader.h"
#include "Cesium3DTilesSelection/TileID.h"
#include "Cesium3DTilesSelection/TileRefine.h"

#include <spdlog/fwd.h>

#include <memory>
#include <string>

namespace Cesium3DTilesSelection {

class Tileset;

/**
 * @brief Creates a {@link TileContentLoadResult} from CMPT data.
 */
class CESIUM3DTILESSELECTION_API CompositeContent final
    : public TileContentLoader {
public:
  CesiumAsync::Future<std::unique_ptr<TileContentLoadResult>>
  load(const TileContentLoadInput& input) override;
};

} // namespace Cesium3DTilesSelection
