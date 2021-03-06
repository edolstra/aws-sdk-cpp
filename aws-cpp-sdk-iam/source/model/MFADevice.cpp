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
#include <aws/iam/model/MFADevice.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

MFADevice::MFADevice() : 
    m_userNameHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_enableDate(0.0),
    m_enableDateHasBeenSet(false)
{
}

MFADevice::MFADevice(const XmlNode& xmlNode) : 
    m_userNameHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_enableDate(0.0),
    m_enableDateHasBeenSet(false)
{
  *this = xmlNode;
}

MFADevice& MFADevice::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    if(!userNameNode.IsNull())
    {
      m_userName = StringUtils::Trim(userNameNode.GetText().c_str());
      m_userNameHasBeenSet = true;
    }
    XmlNode serialNumberNode = resultNode.FirstChild("SerialNumber");
    if(!serialNumberNode.IsNull())
    {
      m_serialNumber = StringUtils::Trim(serialNumberNode.GetText().c_str());
      m_serialNumberHasBeenSet = true;
    }
    XmlNode enableDateNode = resultNode.FirstChild("EnableDate");
    if(!enableDateNode.IsNull())
    {
      m_enableDate = StringUtils::ConvertToDouble(StringUtils::Trim(enableDateNode.GetText().c_str()).c_str());
      m_enableDateHasBeenSet = true;
    }
  }

  return *this;
}

void MFADevice::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_serialNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".SerialNumber=" << StringUtils::URLEncode(m_serialNumber.c_str()) << "&";
  }
  if(m_enableDateHasBeenSet)
  {
        oStream << location << index << locationValue << ".EnableDate=" << StringUtils::URLEncode(m_enableDate) << "&";
  }
}

void MFADevice::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userNameHasBeenSet)
  {
      oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_serialNumberHasBeenSet)
  {
      oStream << location << ".SerialNumber=" << StringUtils::URLEncode(m_serialNumber.c_str()) << "&";
  }
  if(m_enableDateHasBeenSet)
  {
        oStream << location << ".EnableDate=" << StringUtils::URLEncode(m_enableDate) << "&";
  }
}
