/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/firehose/model/CompressionFormat.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int UNCOMPRESSED_HASH = HashingUtils::HashString("UNCOMPRESSED");
static const int GZIP_HASH = HashingUtils::HashString("GZIP");
static const int ZIP_HASH = HashingUtils::HashString("ZIP");
static const int Snappy_HASH = HashingUtils::HashString("Snappy");

namespace Aws
{
namespace Firehose
{
namespace Model
{
namespace CompressionFormatMapper
{
CompressionFormat GetCompressionFormatForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == UNCOMPRESSED_HASH)
  {
    return CompressionFormat::UNCOMPRESSED;
  }
  else if (hashCode == GZIP_HASH)
  {
    return CompressionFormat::GZIP;
  }
  else if (hashCode == ZIP_HASH)
  {
    return CompressionFormat::ZIP;
  }
  else if (hashCode == Snappy_HASH)
  {
    return CompressionFormat::Snappy;
  }

  return CompressionFormat::NOT_SET;
}

Aws::String GetNameForCompressionFormat(CompressionFormat value)
{
  switch(value)
  {
  case CompressionFormat::UNCOMPRESSED:
    return "UNCOMPRESSED";
  case CompressionFormat::GZIP:
    return "GZIP";
  case CompressionFormat::ZIP:
    return "ZIP";
  case CompressionFormat::Snappy:
    return "Snappy";
  default:
    return "";
  }
}

} // namespace CompressionFormatMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
