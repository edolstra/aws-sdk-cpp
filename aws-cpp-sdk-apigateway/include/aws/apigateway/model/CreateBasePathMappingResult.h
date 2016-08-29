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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents the base path that callers of the API that must provide as part of
   * the URL after the domain name.</p>
   */
  class AWS_APIGATEWAY_API CreateBasePathMappingResult
  {
  public:
    CreateBasePathMappingResult();
    CreateBasePathMappingResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBasePathMappingResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline void SetBasePath(const Aws::String& value) { m_basePath = value; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline void SetBasePath(Aws::String&& value) { m_basePath = value; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline void SetBasePath(const char* value) { m_basePath.assign(value); }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline CreateBasePathMappingResult& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline CreateBasePathMappingResult& WithBasePath(Aws::String&& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline CreateBasePathMappingResult& WithBasePath(const char* value) { SetBasePath(value); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiId = value; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiId = value; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiId.assign(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline CreateBasePathMappingResult& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline CreateBasePathMappingResult& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline CreateBasePathMappingResult& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the API's stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>The name of the API's stage.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stage = value; }

    /**
     * <p>The name of the API's stage.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stage = value; }

    /**
     * <p>The name of the API's stage.</p>
     */
    inline void SetStage(const char* value) { m_stage.assign(value); }

    /**
     * <p>The name of the API's stage.</p>
     */
    inline CreateBasePathMappingResult& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The name of the API's stage.</p>
     */
    inline CreateBasePathMappingResult& WithStage(Aws::String&& value) { SetStage(value); return *this;}

    /**
     * <p>The name of the API's stage.</p>
     */
    inline CreateBasePathMappingResult& WithStage(const char* value) { SetStage(value); return *this;}

  private:
    Aws::String m_basePath;
    Aws::String m_restApiId;
    Aws::String m_stage;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
