/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TUHandle, NSString;

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying> {

	TUHandle* _handle;

}

@property (nonatomic,readonly) TUHandle * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * isoCountryCode; 
+(BOOL)supportsSecureCoding;
+(id)metadataDestinationIDsForCHRecentCalls:(id)arg1 ;
+(id)metadataDestinationIDsForCHRecentCall:(id)arg1 ;
+(id)metadataDestinationIDForCall:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TUHandle *)handle;
-(NSString *)isoCountryCode;
-(id)initWithHandle:(id)arg1 ;
-(BOOL)isEqualToMetadataDestinationID:(id)arg1 ;
-(id)initWithDestinationID:(id)arg1 isoCountryCode:(id)arg2 ;
@end

