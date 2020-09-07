/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PIExportMetadataBuilder.h>

@class NSArray;

@interface PIExportVideoMetadataBuilder : PIExportMetadataBuilder

@property (nonatomic,copy,readonly) NSArray * metadataItems; 
-(NSArray *)metadataItems;
-(id)titleItem;
-(id)locationItem;
-(id)commonItemForKey:(id)arg1 string:(id)arg2 ;
-(id)captionItem;
-(id)creationDateItem;
-(id)videoDateFormatter;
-(id)keywordsItem;
@end
