/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface _LSLazyPropertyList : NSObject <NSCopying, NSSecureCoding>

@property (readonly) NSDictionary * propertyList; 
+(BOOL)supportsSecureCoding;
+(id)lazyPropertyListWithContext:(LSContext*)arg1 unit:(unsigned)arg2 ;
+(id)lazyPropertyListWithPropertyListData:(id)arg1 ;
+(id)lazyPropertyList;
+(id)lazyPropertyListWithPropertyListURL:(id)arg1 ;
+(id)lazyPropertyListWithLazyPropertyLists:(id)arg1 ;
+(id)lazyPropertyListWithPropertyList:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)propertyList;
-(id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)_filterValueFromPropertyList:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)objectsForPropertyListKeys:(id)arg1 ;
-(id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
@end
