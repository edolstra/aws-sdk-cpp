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
#include <aws/firehose/model/DeliveryStreamStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

namespace Aws
{
namespace Firehose
{
namespace Model
{
namespace DeliveryStreamStatusMapper
{
DeliveryStreamStatus GetDeliveryStreamStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == CREATING_HASH)
  {
    return DeliveryStreamStatus::CREATING;
  }
  else if (hashCode == DELETING_HASH)
  {
    return DeliveryStreamStatus::DELETING;
  }
  else if (hashCode == ACTIVE_HASH)
  {
    return DeliveryStreamStatus::ACTIVE;
  }

  return DeliveryStreamStatus::NOT_SET;
}

Aws::String GetNameForDeliveryStreamStatus(DeliveryStreamStatus value)
{
  switch(value)
  {
  case DeliveryStreamStatus::CREATING:
    return "CREATING";
  case DeliveryStreamStatus::DELETING:
    return "DELETING";
  case DeliveryStreamStatus::ACTIVE:
    return "ACTIVE";
  default:
    return "";
  }
}

} // namespace DeliveryStreamStatusMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
