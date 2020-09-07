/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDate;

@interface WBSRemoteHistoryVisit : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSDate* _date;

}

@property (nonatomic,readonly) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 date:(id)arg2 ;
@end
