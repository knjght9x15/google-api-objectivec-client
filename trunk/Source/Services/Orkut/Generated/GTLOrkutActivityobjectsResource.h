/* Copyright (c) 2011 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLOrkutActivityobjectsResource.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Orkut API (orkut/v2)
// Description:
//   Lets you manage activities, comments and badges in Orkut. More stuff coming
//   in time.
// Documentation:
//   http://code.google.com/apis/orkut/v2/reference.html
// Classes:
//   GTLOrkutActivityobjectsResource (0 custom class methods, 6 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLOrkutActivitypersonResource;
@class GTLOrkutLinkResource;

// ----------------------------------------------------------------------------
//
//   GTLOrkutActivityobjectsResource
//

@interface GTLOrkutActivityobjectsResource : GTLObject

// The HTML-formatted content, suitable for display. When updating an activity's
// content, post the changes to this property, using the value of
// originalContent as a starting point. If the update is successful, the server
// adds HTML formatting and responds with this formatted content.
@property (retain) NSString *content;

// The title of the object.
@property (retain) NSString *displayName;

// The ID for the object.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSString *identifier;

// Links to other resources related to this object.
@property (retain) NSArray *links;  // of GTLOrkutLinkResource

// The object type.
@property (retain) NSString *objectType;

// The person who is related with this activity, e.g. an Added User.
@property (retain) GTLOrkutActivitypersonResource *person;

@end