//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSPhotosTableItem.h"

@class TVSDataCollection;

@interface TVHSPhotoAlbumTableItem : TVHSPhotosTableItem
{
    TVSDataCollection *_dataCollection;	// 8 = 0x8
}

@property(retain, nonatomic) TVSDataCollection *dataCollection; // @synthesize dataCollection=_dataCollection;
- (void).cxx_destruct;	// IMP=0x00000001000094d4
- (void)configureTableViewPhotoCollectionCell:(id)arg1;	// IMP=0x0000000100009308
- (id)newViewController;	// IMP=0x00000001000092c4
- (id)name;	// IMP=0x00000001000092a0
- (id)initWithDataCollection:(id)arg1;	// IMP=0x000000010000913c

@end

