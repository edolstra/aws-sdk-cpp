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
#include <aws/rds/model/ApplyMethod.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int immediate_HASH = HashingUtils::HashString("immediate");
static const int pending_reboot_HASH = HashingUtils::HashString("pending-reboot");

namespace Aws
{
namespace RDS
{
namespace Model
{
namespace ApplyMethodMapper
{
ApplyMethod GetApplyMethodForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == immediate_HASH)
  {
    return ApplyMethod::immediate;
  }
  else if (hashCode == pending_reboot_HASH)
  {
    return ApplyMethod::pending_reboot;
  }

  return ApplyMethod::NOT_SET;
}

Aws::String GetNameForApplyMethod(ApplyMethod value)
{
  switch(value)
  {
  case ApplyMethod::immediate:
    return "immediate";
  case ApplyMethod::pending_reboot:
    return "pending-reboot";
  default:
    return "";
  }
}

} // namespace ApplyMethodMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
