#include "loki/worker.h"
#include "midgard/logging.h"
#include "proto/vector_tile.pb.h"
#include "tyr/serializers.h"

using namespace valhalla;
using namespace valhalla::tyr;
using namespace valhalla::midgard;
using namespace valhalla::baldr;

namespace valhalla {
namespace loki {

std::string loki_worker_t::tile(valhalla_request_t& request) {
  // fail if we dont have a proper tile name
  if (!request.options.has_tile_name() || !request.options.tile_name().has_z() ||
      !request.options.tile_name().has_x() || !request.options.tile_name().has_y() ||
      !request.options.tile_name().has_style())
    throw valhalla_exception_t{115};

  vector_tile::Tile tile;
  // TODO:
  return tile.SerializeAsString();
}

} // namespace loki
} // namespace valhalla
