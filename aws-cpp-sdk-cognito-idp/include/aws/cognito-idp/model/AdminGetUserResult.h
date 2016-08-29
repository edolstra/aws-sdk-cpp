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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/UserStatusType.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <aws/cognito-idp/model/MFAOptionType.h>

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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Represents the response from the server from the request to get the specified
   * user as an administrator.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminGetUserResult
  {
  public:
    AdminGetUserResult();
    AdminGetUserResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AdminGetUserResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_username = value; }

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_username = value; }

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline void SetUsername(const char* value) { m_username.assign(value); }

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline AdminGetUserResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline AdminGetUserResult& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline AdminGetUserResult& WithUsername(const char* value) { SetUsername(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminGetUserResult& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminGetUserResult& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminGetUserResult& AddUserAttributes(const AttributeType& value) { m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminGetUserResult& AddUserAttributes(AttributeType&& value) { m_userAttributes.push_back(value); return *this; }

    /**
     * <p>The date the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetUserCreateDate() const{ return m_userCreateDate; }

    /**
     * <p>The date the user was created.</p>
     */
    inline void SetUserCreateDate(const Aws::Utils::DateTime& value) { m_userCreateDate = value; }

    /**
     * <p>The date the user was created.</p>
     */
    inline void SetUserCreateDate(Aws::Utils::DateTime&& value) { m_userCreateDate = value; }

    /**
     * <p>The date the user was created.</p>
     */
    inline AdminGetUserResult& WithUserCreateDate(const Aws::Utils::DateTime& value) { SetUserCreateDate(value); return *this;}

    /**
     * <p>The date the user was created.</p>
     */
    inline AdminGetUserResult& WithUserCreateDate(Aws::Utils::DateTime&& value) { SetUserCreateDate(value); return *this;}

    /**
     * <p>The date the user was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetUserLastModifiedDate() const{ return m_userLastModifiedDate; }

    /**
     * <p>The date the user was last modified.</p>
     */
    inline void SetUserLastModifiedDate(const Aws::Utils::DateTime& value) { m_userLastModifiedDate = value; }

    /**
     * <p>The date the user was last modified.</p>
     */
    inline void SetUserLastModifiedDate(Aws::Utils::DateTime&& value) { m_userLastModifiedDate = value; }

    /**
     * <p>The date the user was last modified.</p>
     */
    inline AdminGetUserResult& WithUserLastModifiedDate(const Aws::Utils::DateTime& value) { SetUserLastModifiedDate(value); return *this;}

    /**
     * <p>The date the user was last modified.</p>
     */
    inline AdminGetUserResult& WithUserLastModifiedDate(Aws::Utils::DateTime&& value) { SetUserLastModifiedDate(value); return *this;}

    /**
     * <p>Indicates that the status is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates that the status is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>Indicates that the status is enabled.</p>
     */
    inline AdminGetUserResult& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline const UserStatusType& GetUserStatus() const{ return m_userStatus; }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline void SetUserStatus(const UserStatusType& value) { m_userStatus = value; }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline void SetUserStatus(UserStatusType&& value) { m_userStatus = value; }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline AdminGetUserResult& WithUserStatus(const UserStatusType& value) { SetUserStatus(value); return *this;}

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline AdminGetUserResult& WithUserStatus(UserStatusType&& value) { SetUserStatus(value); return *this;}

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const{ return m_mFAOptions; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline void SetMFAOptions(const Aws::Vector<MFAOptionType>& value) { m_mFAOptions = value; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline void SetMFAOptions(Aws::Vector<MFAOptionType>&& value) { m_mFAOptions = value; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline AdminGetUserResult& WithMFAOptions(const Aws::Vector<MFAOptionType>& value) { SetMFAOptions(value); return *this;}

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline AdminGetUserResult& WithMFAOptions(Aws::Vector<MFAOptionType>&& value) { SetMFAOptions(value); return *this;}

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline AdminGetUserResult& AddMFAOptions(const MFAOptionType& value) { m_mFAOptions.push_back(value); return *this; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline AdminGetUserResult& AddMFAOptions(MFAOptionType&& value) { m_mFAOptions.push_back(value); return *this; }

  private:
    Aws::String m_username;
    Aws::Vector<AttributeType> m_userAttributes;
    Aws::Utils::DateTime m_userCreateDate;
    Aws::Utils::DateTime m_userLastModifiedDate;
    bool m_enabled;
    UserStatusType m_userStatus;
    Aws::Vector<MFAOptionType> m_mFAOptions;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
