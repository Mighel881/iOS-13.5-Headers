/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {

	NSData* mData;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)inputStream;
-(long long)dataLength;
-(BOOL)isReadable;
-(id)bufferedInputStream;
-(unsigned long long)readIntoData:(id)arg1 ;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
@end
