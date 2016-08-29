﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ResourceTagSet.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type containing tags for the specified resource.</p>
   */
  class AWS_ROUTE53_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTagsForResourceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline const ResourceTagSet& GetResourceTagSet() const{ return m_resourceTagSet; }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline void SetResourceTagSet(const ResourceTagSet& value) { m_resourceTagSet = value; }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline void SetResourceTagSet(ResourceTagSet&& value) { m_resourceTagSet = value; }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline ListTagsForResourceResult& WithResourceTagSet(const ResourceTagSet& value) { SetResourceTagSet(value); return *this;}

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline ListTagsForResourceResult& WithResourceTagSet(ResourceTagSet&& value) { SetResourceTagSet(value); return *this;}

  private:
    ResourceTagSet m_resourceTagSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws