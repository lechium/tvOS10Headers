//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSNavigationItem.h"

@class NSArray, NSDictionary, NSString;

@interface TVHSMovieGenresNavigationItem : TVHSNavigationItem
{
    NSArray *_genreNames;	// 8 = 0x8
    NSDictionary *_genreNameToMovies;	// 16 = 0x10
    NSString *_numberOfMoviesInGenreFormat;	// 24 = 0x18
    NSString *_oneMovieInGenreLabel;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *oneMovieInGenreLabel; // @synthesize oneMovieInGenreLabel=_oneMovieInGenreLabel;
@property(copy, nonatomic) NSString *numberOfMoviesInGenreFormat; // @synthesize numberOfMoviesInGenreFormat=_numberOfMoviesInGenreFormat;
@property(copy, nonatomic) NSDictionary *genreNameToMovies; // @synthesize genreNameToMovies=_genreNameToMovies;
@property(copy, nonatomic) NSArray *genreNames; // @synthesize genreNames=_genreNames;
- (void).cxx_destruct;	// IMP=0x000000010000a21c
- (unsigned long long)_numberOfMoviesForGenreName:(id)arg1;	// IMP=0x000000010000a174
- (id)_moviesAtIndexPath:(id)arg1;	// IMP=0x000000010000a100
- (void)_configureGenreCell:(id)arg1 forGenreDisplayNameName:(id)arg2 numberOfMovies:(unsigned long long)arg3;	// IMP=0x0000000100009ff4
- (id)_genreDisplayNameForGenreName:(id)arg1;	// IMP=0x0000000100009f3c
- (id)_genreNameAtIndexPath:(id)arg1;	// IMP=0x0000000100009e74
- (id)_cellForContentItemAtIndexPath:(id)arg1 tableView:(id)arg2;	// IMP=0x0000000100009d60
- (id)_playlistsViewController;	// IMP=0x0000000100009cec
- (id)_playlistsPreviewDataClientResultsController;	// IMP=0x0000000100009c88
- (id)_selectViewControllerForContentItemAtIndexPath:(id)arg1;	// IMP=0x0000000100009b6c
- (id)_previewViewControllerForContentItemAtIndexPath:(id)arg1;	// IMP=0x0000000100009af0
- (struct UIEdgeInsets)_previewViewPaddingForContentItemAtIndexPath:(id)arg1;	// IMP=0x0000000100009adc
- (id)_playViewControllerForContentItemAtIndexPath:(id)arg1;	// IMP=0x0000000100009ad4
- (_Bool)reloadDataForContentItemViewController:(id)arg1;	// IMP=0x00000001000099b8
- (void)setContentItemsWithMovieGenres:(id)arg1 movieGenreNameToMoviesMap:(id)arg2;	// IMP=0x00000001000097e0
- (id)initWithDataClient:(id)arg1;	// IMP=0x00000001000096c4
- (id)initWithAttributedText:(id)arg1 mediaDisplayFilter:(unsigned long long)arg2 dataClient:(id)arg3 allowPlaylistsSection:(_Bool)arg4;	// IMP=0x0000000100009668

@end
