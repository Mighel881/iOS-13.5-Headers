/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface IMNicknameEncryptionKey : NSObject {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned long long length; 
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
@end

