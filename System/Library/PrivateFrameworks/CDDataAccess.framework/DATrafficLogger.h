/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DATrafficLogger : NSObject {

	NSString* _filename;

}

@property (nonatomic,retain) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(BOOL)enabled;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(id)initWithFilename:(id)arg1 ;
-(void)_ensureCustomLogFile;
-(void)logSnippet:(id)arg1 ;
-(void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
@end
