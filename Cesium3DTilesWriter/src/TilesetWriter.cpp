// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!

#include <Cesium3DTiles/TilesetWriter.h>

#include <CesiumJsonWriter/ExtensionWriterContext.h>
#include <CesiumJsonWriter/ExtensionsWriter.h>
#include <CesiumJsonWriter/JsonWriter.h>

using namespace CesiumJsonWriter;
using namespace CesiumUtility;

namespace Cesium3DTiles {

namespace {
[[maybe_unused]] void writeJson(
    bool val,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& /* context */) {
  jsonWriter.Bool(val);
}

[[maybe_unused]] void writeJson(
    int64_t val,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& /* context */) {
  jsonWriter.Int64(val);
}

[[maybe_unused]] void writeJson(
    double val,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& /* context */) {
  jsonWriter.Double(val);
}

[[maybe_unused]] void writeJson(
    const std::string& val,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& /* context */) {
  jsonWriter.String(val);
}

template <typename T>
void writeJson(
    const std::vector<T>& list,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context);

template <typename T>
void writeJson(
    const std::optional<T>& list,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context);

template <typename T>
void writeJson(
    const std::unordered_map<std::string, T>& list,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context);

template <typename... Ts>
void writeJson(
    const std::variant<Ts...>& val,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context);
} // namespace

/////////////////////////////////////////
// Writer for Asset
/////////////////////////////////////////

namespace {
void writeJson(
    const Asset& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("version");
  writeJson(obj.version, jsonWriter, context);

  if (obj.tilesetVersion.has_value()) {
    jsonWriter.Key("tilesetVersion");
    writeJson(obj.tilesetVersion, jsonWriter, context);
  }

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void AssetWriter::write(
    const Asset& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for BoundingVolume
/////////////////////////////////////////

namespace {
void writeJson(
    const BoundingVolume& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.box.has_value()) {
    jsonWriter.Key("box");
    writeJson(obj.box, jsonWriter, context);
  }

  if (obj.region.has_value()) {
    jsonWriter.Key("region");
    writeJson(obj.region, jsonWriter, context);
  }

  if (obj.sphere.has_value()) {
    jsonWriter.Key("sphere");
    writeJson(obj.sphere, jsonWriter, context);
  }

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void BoundingVolumeWriter::write(
    const BoundingVolume& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for TileContent
/////////////////////////////////////////

namespace {
void writeJson(
    const TileContent& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.boundingVolume.has_value()) {
    jsonWriter.Key("boundingVolume");
    writeJson(obj.boundingVolume, jsonWriter, context);
  }

  jsonWriter.Key("uri");
  writeJson(obj.uri, jsonWriter, context);

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void TileContentWriter::write(
    const TileContent& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for Tile::Refine
/////////////////////////////////////////

namespace {
void writeJson(
    const Tile::Refine& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  using namespace std::string_literals;

  switch (obj) {
  case Tile::Refine::ADD:
    writeJson("ADD"s, jsonWriter, context);
    break;
  case Tile::Refine::REPLACE:
    writeJson("REPLACE"s, jsonWriter, context);
    break;
  default:
    jsonWriter.Null();
  }
}
} // namespace

void TileWriter::RefineWriter::write(
    const Tile::Refine& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for Tile
/////////////////////////////////////////

namespace {
void writeJson(
    const Tile& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("boundingVolume");
  writeJson(obj.boundingVolume, jsonWriter, context);

  if (obj.viewerRequestVolume.has_value()) {
    jsonWriter.Key("viewerRequestVolume");
    writeJson(obj.viewerRequestVolume, jsonWriter, context);
  }

  jsonWriter.Key("geometricError");
  writeJson(obj.geometricError, jsonWriter, context);

  if (obj.refine.has_value()) {
    jsonWriter.Key("refine");
    writeJson(obj.refine, jsonWriter, context);
  }

  jsonWriter.Key("transform");
  writeJson(obj.transform, jsonWriter, context);

  if (obj.content.has_value()) {
    jsonWriter.Key("content");
    writeJson(obj.content, jsonWriter, context);
  }

  if (obj.children.has_value()) {
    jsonWriter.Key("children");
    writeJson(obj.children, jsonWriter, context);
  }

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void TileWriter::write(
    const Tile& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for TilesetProperties
/////////////////////////////////////////

namespace {
void writeJson(
    const TilesetProperties& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("maximum");
  writeJson(obj.maximum, jsonWriter, context);

  jsonWriter.Key("minimum");
  writeJson(obj.minimum, jsonWriter, context);

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void TilesetPropertiesWriter::write(
    const TilesetProperties& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for Tileset::Properties
/////////////////////////////////////////

namespace {
void writeJson(
    const Tileset::Properties& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  writeJson(obj.additionalProperties, jsonWriter, context);

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void TilesetWriter::PropertiesWriter::write(
    const Tileset::Properties& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for Tileset
/////////////////////////////////////////

namespace {
void writeJson(
    const Tileset& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("asset");
  writeJson(obj.asset, jsonWriter, context);

  if (obj.properties.has_value()) {
    jsonWriter.Key("properties");
    writeJson(obj.properties, jsonWriter, context);
  }

  jsonWriter.Key("geometricError");
  writeJson(obj.geometricError, jsonWriter, context);

  jsonWriter.Key("root");
  writeJson(obj.root, jsonWriter, context);

  if (obj.extensionsUsed.has_value()) {
    jsonWriter.Key("extensionsUsed");
    writeJson(obj.extensionsUsed, jsonWriter, context);
  }

  if (obj.extensionsRequired.has_value()) {
    jsonWriter.Key("extensionsRequired");
    writeJson(obj.extensionsRequired, jsonWriter, context);
  }

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void TilesetWriter::write(
    const Tileset& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::BinaryBodyReference::ComponentType
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::BinaryBodyReference::ComponentType& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  using namespace std::string_literals;

  switch (obj) {
  case FeatureTable::BinaryBodyReference::ComponentType::BYTE:
    writeJson("BYTE"s, jsonWriter, context);
    break;
  case FeatureTable::BinaryBodyReference::ComponentType::UNSIGNED_BYTE:
    writeJson("UNSIGNED_BYTE"s, jsonWriter, context);
    break;
  case FeatureTable::BinaryBodyReference::ComponentType::SHORT:
    writeJson("SHORT"s, jsonWriter, context);
    break;
  case FeatureTable::BinaryBodyReference::ComponentType::UNSIGNED_SHORT:
    writeJson("UNSIGNED_SHORT"s, jsonWriter, context);
    break;
  case FeatureTable::BinaryBodyReference::ComponentType::INT:
    writeJson("INT"s, jsonWriter, context);
    break;
  case FeatureTable::BinaryBodyReference::ComponentType::UNSIGNED_INT:
    writeJson("UNSIGNED_INT"s, jsonWriter, context);
    break;
  case FeatureTable::BinaryBodyReference::ComponentType::FLOAT:
    writeJson("FLOAT"s, jsonWriter, context);
    break;
  case FeatureTable::BinaryBodyReference::ComponentType::DOUBLE:
    writeJson("DOUBLE"s, jsonWriter, context);
    break;
  default:
    jsonWriter.Null();
  }
}
} // namespace

void FeatureTableWriter::BinaryBodyReferenceWriter::ComponentTypeWriter::write(
    const FeatureTable::BinaryBodyReference::ComponentType& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::BinaryBodyReference
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::BinaryBodyReference& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("byteOffset");
  writeJson(obj.byteOffset, jsonWriter, context);

  if (obj.componentType.has_value()) {
    jsonWriter.Key("componentType");
    writeJson(obj.componentType, jsonWriter, context);
  }

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void FeatureTableWriter::BinaryBodyReferenceWriter::write(
    const FeatureTable::BinaryBodyReference& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::Property
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::Property& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  if (obj.v0.has_value()) {
    writeJson(obj.v0, jsonWriter, context);
    return;
  }
  if (obj.v1.has_value()) {
    writeJson(obj.v1, jsonWriter, context);
    return;
  }
  if (obj.v2.has_value()) {
    writeJson(obj.v2, jsonWriter, context);
    return;
  }

  jsonWriter.Null();
}
} // namespace

void FeatureTableWriter::PropertyWriter::write(
    const FeatureTable::Property& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::GlobalPropertyScalar::Variant0
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::GlobalPropertyScalar::Variant0& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("byteOffset");
  writeJson(obj.byteOffset, jsonWriter, context);

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void FeatureTableWriter::GlobalPropertyScalarWriter::Variant0Writer::write(
    const FeatureTable::GlobalPropertyScalar::Variant0& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::GlobalPropertyScalar
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::GlobalPropertyScalar& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  if (obj.v0.has_value()) {
    writeJson(obj.v0, jsonWriter, context);
    return;
  }
  if (obj.v1.has_value()) {
    writeJson(obj.v1, jsonWriter, context);
    return;
  }
  if (obj.v2.has_value()) {
    writeJson(obj.v2, jsonWriter, context);
    return;
  }

  jsonWriter.Null();
}
} // namespace

void FeatureTableWriter::GlobalPropertyScalarWriter::write(
    const FeatureTable::GlobalPropertyScalar& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::GlobalPropertyCartesian3::Variant0
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::GlobalPropertyCartesian3::Variant0& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("byteOffset");
  writeJson(obj.byteOffset, jsonWriter, context);

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void FeatureTableWriter::GlobalPropertyCartesian3Writer::Variant0Writer::write(
    const FeatureTable::GlobalPropertyCartesian3::Variant0& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::GlobalPropertyCartesian3
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::GlobalPropertyCartesian3& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  if (obj.v0.has_value()) {
    writeJson(obj.v0, jsonWriter, context);
    return;
  }
  if (obj.v1.has_value()) {
    writeJson(obj.v1, jsonWriter, context);
    return;
  }

  jsonWriter.Null();
}
} // namespace

void FeatureTableWriter::GlobalPropertyCartesian3Writer::write(
    const FeatureTable::GlobalPropertyCartesian3& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::GlobalPropertyCartesian4::Variant0
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::GlobalPropertyCartesian4::Variant0& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("byteOffset");
  writeJson(obj.byteOffset, jsonWriter, context);

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void FeatureTableWriter::GlobalPropertyCartesian4Writer::Variant0Writer::write(
    const FeatureTable::GlobalPropertyCartesian4::Variant0& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable::GlobalPropertyCartesian4
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable::GlobalPropertyCartesian4& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  if (obj.v0.has_value()) {
    writeJson(obj.v0, jsonWriter, context);
    return;
  }
  if (obj.v1.has_value()) {
    writeJson(obj.v1, jsonWriter, context);
    return;
  }

  jsonWriter.Null();
}
} // namespace

void FeatureTableWriter::GlobalPropertyCartesian4Writer::write(
    const FeatureTable::GlobalPropertyCartesian4& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for FeatureTable
/////////////////////////////////////////

namespace {
void writeJson(
    const FeatureTable& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  writeJson(obj.additionalProperties, jsonWriter, context);

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void FeatureTableWriter::write(
    const FeatureTable& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

/////////////////////////////////////////
// Writer for PntsFeatureTable
/////////////////////////////////////////

namespace {
void writeJson(
    const PntsFeatureTable& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.POSITION.has_value()) {
    jsonWriter.Key("POSITION");
    writeJson(obj.POSITION, jsonWriter, context);
  }

  if (obj.POSITION_QUANTIZED.has_value()) {
    jsonWriter.Key("POSITION_QUANTIZED");
    writeJson(obj.POSITION_QUANTIZED, jsonWriter, context);
  }

  if (obj.RGBA.has_value()) {
    jsonWriter.Key("RGBA");
    writeJson(obj.RGBA, jsonWriter, context);
  }

  if (obj.RGB.has_value()) {
    jsonWriter.Key("RGB");
    writeJson(obj.RGB, jsonWriter, context);
  }

  if (obj.RGB565.has_value()) {
    jsonWriter.Key("RGB565");
    writeJson(obj.RGB565, jsonWriter, context);
  }

  if (obj.NORMAL.has_value()) {
    jsonWriter.Key("NORMAL");
    writeJson(obj.NORMAL, jsonWriter, context);
  }

  if (obj.NORMAL_OCT16P.has_value()) {
    jsonWriter.Key("NORMAL_OCT16P");
    writeJson(obj.NORMAL_OCT16P, jsonWriter, context);
  }

  if (obj.BATCH_ID.has_value()) {
    jsonWriter.Key("BATCH_ID");
    writeJson(obj.BATCH_ID, jsonWriter, context);
  }

  if (obj.POINTS_LENGTH.has_value()) {
    jsonWriter.Key("POINTS_LENGTH");
    writeJson(obj.POINTS_LENGTH, jsonWriter, context);
  }

  if (obj.RTC_CENTER.has_value()) {
    jsonWriter.Key("RTC_CENTER");
    writeJson(obj.RTC_CENTER, jsonWriter, context);
  }

  if (obj.QUANTIZED_VOLUME_OFFSET.has_value()) {
    jsonWriter.Key("QUANTIZED_VOLUME_OFFSET");
    writeJson(obj.QUANTIZED_VOLUME_OFFSET, jsonWriter, context);
  }

  if (obj.QUANTIZED_VOLUME_SCALE.has_value()) {
    jsonWriter.Key("QUANTIZED_VOLUME_SCALE");
    writeJson(obj.QUANTIZED_VOLUME_SCALE, jsonWriter, context);
  }

  if (obj.CONSTANT_RGBA.has_value()) {
    jsonWriter.Key("CONSTANT_RGBA");
    writeJson(obj.CONSTANT_RGBA, jsonWriter, context);
  }

  if (obj.BATCH_LENGTH.has_value()) {
    jsonWriter.Key("BATCH_LENGTH");
    writeJson(obj.BATCH_LENGTH, jsonWriter, context);
  }

  if (!obj.extensions.empty()) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  jsonWriter.EndObject();
}
} // namespace

void PntsFeatureTableWriter::write(
    const PntsFeatureTable& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

namespace {
template <typename T>
[[maybe_unused]] void writeJson(
    const std::vector<T>& list,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  jsonWriter.StartArray();
  for (const T& item : list) {
    writeJson(item, jsonWriter, context);
  }
  jsonWriter.EndArray();
}

template <typename T>
[[maybe_unused]] void writeJson(
    const std::optional<T>& val,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  if (val.has_value()) {
    writeJson(*val, jsonWriter, context);
  } else {
    jsonWriter.Null();
  }
}

template <typename T>
[[maybe_unused]] void writeJson(
    const std::unordered_map<std::string, T>& obj,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  for (const auto& item : obj) {
    jsonWriter.Key(item.first);
    writeJson(item.second, jsonWriter, context);
  }
}
} // namespace

template <typename... Ts>
void writeJson(
    const std::variant<Ts...>& val,
    JsonWriter& jsonWriter,
    const ExtensionWriterContext& context) {
  std::visit(
      [&jsonWriter, &context](const auto& arg) {
        writeJson(arg, jsonWriter, context);
      },
      val);
}

} // namespace Cesium3DTiles