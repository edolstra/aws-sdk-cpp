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
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p> </p>
  */
  class AWS_RDS_API DescribeDBInstancesRequest : public RDSRequest
  {
  public:
    DescribeDBInstancesRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The user-supplied instance identifier. If this parameter is specified, information from only the specific DB Instance is returned. This parameter isn't case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /*
     <p> The user-supplied instance identifier. If this parameter is specified, information from only the specific DB Instance is returned. This parameter isn't case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /*
     <p> The user-supplied instance identifier. If this parameter is specified, information from only the specific DB Instance is returned. This parameter isn't case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /*
     <p> The user-supplied instance identifier. If this parameter is specified, information from only the specific DB Instance is returned. This parameter isn't case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /*
     <p> The user-supplied instance identifier. If this parameter is specified, information from only the specific DB Instance is returned. This parameter isn't case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The user-supplied instance identifier. If this parameter is specified, information from only the specific DB Instance is returned. This parameter isn't case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The user-supplied instance identifier. If this parameter is specified, information from only the specific DB Instance is returned. This parameter isn't case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline DescribeDBInstancesRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeDBInstances request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p> An optional pagination token provided by a previous DescribeDBInstances request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p> An optional pagination token provided by a previous DescribeDBInstances request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p> An optional pagination token provided by a previous DescribeDBInstances request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p> An optional pagination token provided by a previous DescribeDBInstances request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline DescribeDBInstancesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeDBInstances request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline DescribeDBInstancesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeDBInstances request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code> . </p>
    */
    inline DescribeDBInstancesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
