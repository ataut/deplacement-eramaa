{
	"patcher" : 	{
		"fileversion" : 1,
		"appversion" : 		{
			"major" : 8,
			"minor" : 6,
			"revision" : 2,
			"architecture" : "x64",
			"modernui" : 1
		}
,
		"classnamespace" : "box",
		"rect" : [ 276.0, 99.0, 729.0, 759.0 ],
		"bglocked" : 0,
		"openinpresentation" : 0,
		"default_fontsize" : 12.0,
		"default_fontface" : 0,
		"default_fontname" : "Arial",
		"gridonopen" : 1,
		"gridsize" : [ 15.0, 15.0 ],
		"gridsnaponopen" : 1,
		"objectsnaponopen" : 1,
		"statusbarvisible" : 2,
		"toolbarvisible" : 1,
		"lefttoolbarpinned" : 0,
		"toptoolbarpinned" : 0,
		"righttoolbarpinned" : 0,
		"bottomtoolbarpinned" : 0,
		"toolbars_unpinned_last_save" : 0,
		"tallnewobj" : 0,
		"boxanimatetime" : 200,
		"enablehscroll" : 1,
		"enablevscroll" : 1,
		"devicewidth" : 0.0,
		"description" : "",
		"digest" : "",
		"tags" : "",
		"style" : "",
		"subpatcher_template" : "",
		"assistshowspatchername" : 0,
		"boxes" : [ 			{
				"box" : 				{
					"fontface" : 0,
					"fontsize" : 14.0,
					"id" : "obj-14",
					"linecount" : 5,
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 32.0, 622.0, 290.0, 85.0 ],
					"text" : "Atau Tanaka, 2 grain-element RNBO port of 12_16_grain_cloud.maxpat example from Cipriani and Giri , \"Theory and Practice with Max and MSP vol. 3\"\nMay 2024"
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-7",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "event",
								"index" : 1,
								"tag" : "in1",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 5,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 3,
								"tag" : "out3",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 4,
								"tag" : "out4",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "signal", "signal", "list" ],
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "rnbo",
						"rect" : [ 340.0, 423.0, 548.0, 444.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Lato",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"title" : "untitled",
						"boxes" : [ 							{
								"box" : 								{
									"genpatcher" : 									{
										"patcher" : 										{
											"fileversion" : 1,
											"appversion" : 											{
												"major" : 8,
												"minor" : 6,
												"revision" : 2,
												"architecture" : "x64",
												"modernui" : 1
											}
,
											"classnamespace" : "dsp.gen",
											"rect" : [ 97.0, 282.0, 1339.0, 640.0 ],
											"bglocked" : 0,
											"openinpresentation" : 0,
											"default_fontsize" : 12.0,
											"default_fontface" : 0,
											"default_fontname" : "Arial",
											"gridonopen" : 1,
											"gridsize" : [ 15.0, 15.0 ],
											"gridsnaponopen" : 1,
											"objectsnaponopen" : 1,
											"statusbarvisible" : 2,
											"toolbarvisible" : 1,
											"lefttoolbarpinned" : 0,
											"toptoolbarpinned" : 0,
											"righttoolbarpinned" : 0,
											"bottomtoolbarpinned" : 0,
											"toolbars_unpinned_last_save" : 0,
											"tallnewobj" : 0,
											"boxanimatetime" : 200,
											"enablehscroll" : 1,
											"enablevscroll" : 1,
											"devicewidth" : 0.0,
											"description" : "",
											"digest" : "",
											"tags" : "",
											"style" : "",
											"subpatcher_template" : "",
											"assistshowspatchername" : 0,
											"boxes" : [ 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "Element 2",
														"textcolor" : [ 0.941176470588235, 0.219607843137255, 0.219607843137255, 1.0 ],
														"id" : "obj-7",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 991.0, 32.0, 150.0, 20.0 ],
														"fontface" : 1
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "Cloud element from cloud.elem.gendsp taken out of abstraction\nAT",
														"linecount" : 4,
														"textcolor" : [ 0.941176470588235, 0.219607843137255, 0.219607843137255, 1.0 ],
														"id" : "obj-6",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 36.0, 20.0, 150.0, 60.0 ],
														"fontface" : 1
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "pos min",
														"id" : "obj-27",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 1064.0, 158.0, 52.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "pos max",
														"id" : "obj-28",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 1130.0, 159.0, 56.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-29",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 1143.0, 213.0, 47.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 5",
														"id" : "obj-30",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 1143.0, 184.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "expr (in1 > 0) && (in1 <= 1)",
														"id" : "obj-35",
														"numinlets" : 1,
														"numoutlets" : 1,
														"patching_rect" : [ 734.0, 237.0, 156.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "history",
														"id" : "obj-36",
														"numinlets" : 1,
														"numoutlets" : 1,
														"patching_rect" : [ 734.0, 212.0, 46.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "*",
														"id" : "obj-37",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 1005.0, 377.0, 29.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "sample winsample @interp spline @boundmode clamp",
														"linecount" : 3,
														"id" : "obj-38",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 1073.0, 301.0, 125.0, 49.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 4",
														"id" : "obj-39",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 905.0, 88.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "+ 1",
														"id" : "obj-40",
														"numinlets" : 1,
														"numoutlets" : 1,
														"patching_rect" : [ 734.0, 265.0, 28.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain pan",
														"id" : "obj-41",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 821.0, 452.0, 61.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain rev",
														"id" : "obj-42",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 870.0, 359.0, 57.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain amp",
														"linecount" : 2,
														"id" : "obj-43",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 761.0, 381.0, 39.0, 33.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "oscil freq",
														"id" : "obj-44",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 991.0, 166.0, 61.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain trigger",
														"id" : "obj-45",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 880.0, 23.0, 75.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "\"phasor\" increment",
														"linecount" : 2,
														"id" : "obj-46",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 746.0, 112.0, 62.0, 33.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gate 2",
														"id" : "obj-47",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 849.0, 88.0, 44.0, 22.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 8",
														"id" : "obj-48",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 834.0, 474.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-50",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 834.0, 504.0, 36.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 7",
														"id" : "obj-51",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 884.0, 381.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-52",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 884.0, 412.0, 36.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 6",
														"id" : "obj-53",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 799.0, 368.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-54",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 799.0, 398.0, 36.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-66",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 939.0, 165.0, 47.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 3",
														"id" : "obj-75",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 939.0, 136.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-76",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 705.0, 123.0, 36.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 1",
														"id" : "obj-77",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 705.0, 88.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-78",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 1075.0, 217.0, 45.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "+=",
														"id" : "obj-79",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 705.0, 175.0, 29.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title drywet",
														"id" : "obj-80",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 705.0, 447.0, 103.0, 22.0 ],
														"outlettype" : [ "", "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 181.0, 238.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-65",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 21.0, 111.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "!- 1",
																		"id" : "obj-64",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 62.5, 84.0, 28.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-61",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 119.5, 111.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-66",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 21.0, 20.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-67",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 130.0, 20.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-68",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 21.0, 193.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 2",
																		"id" : "obj-69",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 119.5, 193.0, 37.0, 22.0 ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-61", 0 ],
																		"destination" : [ "obj-69", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-64", 0 ],
																		"destination" : [ "obj-65", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-65", 0 ],
																		"destination" : [ "obj-68", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-66", 0 ],
																		"destination" : [ "obj-61", 0 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-66", 0 ],
																		"destination" : [ "obj-65", 0 ],
																		"order" : 1
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-67", 0 ],
																		"destination" : [ "obj-61", 1 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-67", 0 ],
																		"destination" : [ "obj-64", 0 ],
																		"order" : 1
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 3",
														"id" : "obj-81",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 789.0, 474.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 2",
														"id" : "obj-82",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 774.0, 547.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title pan",
														"id" : "obj-83",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 705.0, 511.0, 88.0, 22.0 ],
														"outlettype" : [ "", "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 366.0, 279.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "sin",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 295.0, 107.0, 29.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "cos",
																		"id" : "obj-2",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 125.0, 107.0, 29.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-17",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 108.0, 11.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-14",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 24.0, 207.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-13",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 100.0, 207.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "cycle @index phase",
																		"id" : "obj-12",
																		"numinlets" : 1,
																		"numoutlets" : 2,
																		"patching_rect" : [ 238.0, 140.0, 118.0, 22.0 ],
																		"outlettype" : [ "", "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "cycle @index phase",
																		"id" : "obj-11",
																		"numinlets" : 1,
																		"numoutlets" : 2,
																		"patching_rect" : [ 108.0, 140.0, 118.0, 22.0 ],
																		"outlettype" : [ "", "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "+ 0.75",
																		"id" : "obj-10",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 238.0, 107.0, 44.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "* 0.25",
																		"id" : "obj-9",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 108.0, 47.0, 42.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 2",
																		"id" : "obj-5",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 100.0, 246.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-15",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 24.0, 11.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-16",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 24.0, 246.0, 37.0, 22.0 ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-10", 0 ],
																		"destination" : [ "obj-12", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-11", 0 ],
																		"destination" : [ "obj-14", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-12", 0 ],
																		"destination" : [ "obj-13", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-13", 0 ],
																		"destination" : [ "obj-5", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-14", 0 ],
																		"destination" : [ "obj-16", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-15", 0 ],
																		"destination" : [ "obj-13", 0 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-15", 0 ],
																		"destination" : [ "obj-14", 0 ],
																		"order" : 1
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-17", 0 ],
																		"destination" : [ "obj-9", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-9", 0 ],
																		"destination" : [ "obj-10", 0 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-9", 0 ],
																		"destination" : [ "obj-11", 0 ],
																		"order" : 1
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 4",
														"id" : "obj-84",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 1075.0, 178.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "*",
														"id" : "obj-85",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 705.0, 412.0, 29.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "*",
														"id" : "obj-86",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 705.0, 377.0, 29.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "sample win2 @interp spline",
														"linecount" : 2,
														"id" : "obj-87",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 705.0, 311.0, 88.0, 35.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "wave sample @interp spline @boundmode clamp",
														"linecount" : 3,
														"id" : "obj-88",
														"numinlets" : 4,
														"numoutlets" : 2,
														"patching_rect" : [ 939.0, 301.0, 127.166656000000003, 49.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "phasor",
														"id" : "obj-89",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 939.0, 212.0, 47.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 1",
														"id" : "obj-90",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 705.0, 547.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "out 4 to input 2",
														"id" : "obj-3",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 475.5, 47.0, 150.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 2",
														"id" : "obj-74",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 290.0, 47.0, 28.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "pos min",
														"id" : "obj-34",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 474.0, 155.0, 52.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "pos max",
														"id" : "obj-32",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 540.0, 156.0, 56.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-13",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 553.0, 210.0, 47.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 5",
														"id" : "obj-15",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 553.0, 181.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "expr (in1 > 0) && (in1 <= 1)",
														"id" : "obj-8",
														"numinlets" : 1,
														"numoutlets" : 1,
														"patching_rect" : [ 144.0, 234.0, 156.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "history",
														"id" : "obj-2",
														"numinlets" : 1,
														"numoutlets" : 1,
														"patching_rect" : [ 144.0, 209.0, 46.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "*",
														"id" : "obj-26",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 415.0, 374.0, 29.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "sample winsample @interp spline @boundmode clamp",
														"linecount" : 3,
														"id" : "obj-22",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 483.0, 298.0, 125.0, 49.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "buffer winsample",
														"id" : "obj-12",
														"numinlets" : 0,
														"numoutlets" : 2,
														"patching_rect" : [ 400.0, 536.0, 101.0, 22.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "+ 1",
														"id" : "obj-10",
														"numinlets" : 1,
														"numoutlets" : 1,
														"patching_rect" : [ 144.0, 262.0, 28.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain pan",
														"id" : "obj-20",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 231.0, 449.0, 61.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain rev",
														"id" : "obj-56",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 280.0, 356.0, 57.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain amp",
														"linecount" : 2,
														"id" : "obj-21",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 171.0, 378.0, 39.0, 33.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "oscil freq",
														"id" : "obj-23",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 401.0, 163.0, 61.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain trigger",
														"id" : "obj-18",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 290.0, 20.0, 75.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "\"phasor\" increment",
														"linecount" : 2,
														"id" : "obj-17",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 156.0, 109.0, 62.0, 33.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gate 2",
														"id" : "obj-14",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 259.0, 85.0, 44.0, 22.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 8",
														"id" : "obj-11",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 244.0, 471.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-49",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 244.0, 501.0, 36.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 7",
														"id" : "obj-16",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 294.0, 378.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-19",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 294.0, 409.0, 36.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 6",
														"id" : "obj-24",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 209.0, 365.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-25",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 209.0, 395.0, 36.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-31",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 349.0, 162.0, 47.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 3",
														"id" : "obj-33",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 349.0, 133.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-55",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 115.0, 120.0, 36.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 1",
														"id" : "obj-57",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 115.0, 85.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "latch",
														"id" : "obj-58",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 485.0, 214.0, 45.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "+=",
														"id" : "obj-59",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 115.0, 172.0, 29.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title drywet",
														"id" : "obj-70",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 115.0, 444.0, 103.0, 22.0 ],
														"outlettype" : [ "", "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 181.0, 238.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-65",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 21.0, 111.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "!- 1",
																		"id" : "obj-64",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 62.5, 84.0, 28.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-61",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 119.5, 111.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-66",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 21.0, 20.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-67",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 130.0, 20.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-68",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 21.0, 193.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 2",
																		"id" : "obj-69",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 119.5, 193.0, 37.0, 22.0 ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-67", 0 ],
																		"destination" : [ "obj-64", 0 ],
																		"order" : 1
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-67", 0 ],
																		"destination" : [ "obj-61", 1 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-66", 0 ],
																		"destination" : [ "obj-65", 0 ],
																		"order" : 1
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-66", 0 ],
																		"destination" : [ "obj-61", 0 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-65", 0 ],
																		"destination" : [ "obj-68", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-64", 0 ],
																		"destination" : [ "obj-65", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-61", 0 ],
																		"destination" : [ "obj-69", 0 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "buffer sample",
														"id" : "obj-60",
														"numinlets" : 0,
														"numoutlets" : 2,
														"patching_rect" : [ 509.0, 536.0, 83.0, 22.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 3",
														"id" : "obj-62",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 199.0, 471.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 2",
														"id" : "obj-61",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 184.0, 544.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title pan",
														"id" : "obj-63",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 115.0, 508.0, 88.0, 22.0 ],
														"outlettype" : [ "", "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 366.0, 279.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "sin",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 295.0, 107.0, 29.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "cos",
																		"id" : "obj-2",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 125.0, 107.0, 29.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-17",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 108.0, 11.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-14",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 24.0, 207.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-13",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 100.0, 207.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "cycle @index phase",
																		"id" : "obj-12",
																		"numinlets" : 1,
																		"numoutlets" : 2,
																		"patching_rect" : [ 238.0, 140.0, 118.0, 22.0 ],
																		"outlettype" : [ "", "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "cycle @index phase",
																		"id" : "obj-11",
																		"numinlets" : 1,
																		"numoutlets" : 2,
																		"patching_rect" : [ 108.0, 140.0, 118.0, 22.0 ],
																		"outlettype" : [ "", "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "+ 0.75",
																		"id" : "obj-10",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 238.0, 107.0, 44.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "* 0.25",
																		"id" : "obj-9",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 108.0, 47.0, 42.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 2",
																		"id" : "obj-5",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 100.0, 246.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-15",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 24.0, 11.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-16",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 24.0, 246.0, 37.0, 22.0 ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-9", 0 ],
																		"destination" : [ "obj-11", 0 ],
																		"order" : 1
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-9", 0 ],
																		"destination" : [ "obj-10", 0 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-17", 0 ],
																		"destination" : [ "obj-9", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-15", 0 ],
																		"destination" : [ "obj-14", 0 ],
																		"order" : 1
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-15", 0 ],
																		"destination" : [ "obj-13", 0 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-14", 0 ],
																		"destination" : [ "obj-16", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-13", 0 ],
																		"destination" : [ "obj-5", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-12", 0 ],
																		"destination" : [ "obj-13", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-11", 0 ],
																		"destination" : [ "obj-14", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-10", 0 ],
																		"destination" : [ "obj-12", 0 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "in 4",
														"id" : "obj-64",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 485.0, 175.0, 30.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "*",
														"id" : "obj-65",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 115.0, 409.0, 29.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "*",
														"id" : "obj-67",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 115.0, 374.0, 29.5, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "buffer win2",
														"id" : "obj-68",
														"numinlets" : 0,
														"numoutlets" : 2,
														"patching_rect" : [ 324.0, 536.0, 69.0, 22.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "sample win2 @interp spline",
														"linecount" : 2,
														"id" : "obj-69",
														"numinlets" : 2,
														"numoutlets" : 2,
														"patching_rect" : [ 115.0, 308.0, 88.0, 35.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "wave sample @interp spline @boundmode clamp",
														"linecount" : 3,
														"id" : "obj-71",
														"numinlets" : 4,
														"numoutlets" : 2,
														"patching_rect" : [ 349.0, 298.0, 127.166656000000003, 49.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "phasor",
														"id" : "obj-72",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 349.0, 209.0, 47.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 1",
														"id" : "obj-73",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 115.0, 544.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "overflow",
														"id" : "obj-5",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 356.5, 86.0, 150.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "overflow",
														"id" : "obj-4",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 640.0, 835.0, 55.0, 20.0 ]
													}

												}
 ],
											"lines" : [ 												{
													"patchline" : 													{
														"source" : [ "obj-8", 0 ],
														"destination" : [ "obj-10", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-74", 0 ],
														"destination" : [ "obj-14", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-72", 0 ],
														"destination" : [ "obj-71", 0 ],
														"order" : 1
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-72", 0 ],
														"destination" : [ "obj-22", 0 ],
														"order" : 0
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-71", 0 ],
														"destination" : [ "obj-26", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-70", 0 ],
														"destination" : [ "obj-63", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-70", 1 ],
														"destination" : [ "obj-62", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-69", 0 ],
														"destination" : [ "obj-67", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-67", 0 ],
														"destination" : [ "obj-65", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-65", 0 ],
														"destination" : [ "obj-70", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-64", 0 ],
														"destination" : [ "obj-58", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-63", 0 ],
														"destination" : [ "obj-73", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-63", 1 ],
														"destination" : [ "obj-61", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-59", 0 ],
														"destination" : [ "obj-69", 0 ],
														"order" : 1
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-59", 0 ],
														"destination" : [ "obj-2", 0 ],
														"order" : 0
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-58", 0 ],
														"destination" : [ "obj-71", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-57", 0 ],
														"destination" : [ "obj-55", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-55", 0 ],
														"destination" : [ "obj-59", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-49", 0 ],
														"destination" : [ "obj-63", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-33", 0 ],
														"destination" : [ "obj-31", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-31", 0 ],
														"destination" : [ "obj-72", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-26", 0 ],
														"destination" : [ "obj-67", 1 ],
														"midpoints" : [ 424.5, 407.0, 339.0, 407.0, 339.0, 355.0, 135.0, 355.0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-25", 0 ],
														"destination" : [ "obj-65", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-24", 0 ],
														"destination" : [ "obj-25", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-22", 0 ],
														"destination" : [ "obj-26", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-2", 0 ],
														"destination" : [ "obj-8", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-19", 0 ],
														"destination" : [ "obj-70", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-16", 0 ],
														"destination" : [ "obj-19", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-15", 0 ],
														"destination" : [ "obj-13", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-59", 1 ],
														"order" : 7
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-58", 1 ],
														"midpoints" : [ 268.5, 122.5, 521.0, 122.5 ],
														"order" : 1
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-55", 1 ],
														"order" : 6
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-49", 1 ],
														"order" : 4
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-31", 1 ],
														"midpoints" : [ 268.5, 122.5, 386.5, 122.5 ],
														"order" : 2
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-25", 1 ],
														"order" : 5
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-19", 1 ],
														"order" : 3
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-13", 1 ],
														"midpoints" : [ 268.5, 122.0, 590.5, 122.0 ],
														"order" : 0
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-13", 0 ],
														"destination" : [ "obj-71", 2 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-11", 0 ],
														"destination" : [ "obj-49", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-10", 0 ],
														"destination" : [ "obj-14", 0 ],
														"color" : [ 1.0, 0.0, 0.0, 1.0 ],
														"midpoints" : [ 153.5, 295.0, 234.625, 295.0, 234.625, 79.0, 268.5, 79.0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-40", 0 ],
														"destination" : [ "obj-47", 0 ],
														"color" : [ 1.0, 0.0, 0.0, 1.0 ],
														"midpoints" : [ 743.5, 298.0, 824.625, 298.0, 824.625, 82.0, 858.5, 82.0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-48", 0 ],
														"destination" : [ "obj-50", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-29", 0 ],
														"destination" : [ "obj-88", 2 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 0 ],
														"destination" : [ "obj-29", 1 ],
														"midpoints" : [ 858.5, 125.0, 1180.5, 125.0 ],
														"order" : 0
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 0 ],
														"destination" : [ "obj-52", 1 ],
														"order" : 3
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 0 ],
														"destination" : [ "obj-54", 1 ],
														"order" : 5
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 0 ],
														"destination" : [ "obj-66", 1 ],
														"midpoints" : [ 858.5, 125.5, 976.5, 125.5 ],
														"order" : 2
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 0 ],
														"destination" : [ "obj-50", 1 ],
														"order" : 4
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 0 ],
														"destination" : [ "obj-76", 1 ],
														"order" : 6
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 0 ],
														"destination" : [ "obj-78", 1 ],
														"midpoints" : [ 858.5, 125.5, 1111.0, 125.5 ],
														"order" : 1
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 0 ],
														"destination" : [ "obj-79", 1 ],
														"order" : 7
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-47", 1 ],
														"destination" : [ "obj-39", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-30", 0 ],
														"destination" : [ "obj-29", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-51", 0 ],
														"destination" : [ "obj-52", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-52", 0 ],
														"destination" : [ "obj-80", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-36", 0 ],
														"destination" : [ "obj-35", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-38", 0 ],
														"destination" : [ "obj-37", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-53", 0 ],
														"destination" : [ "obj-54", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-54", 0 ],
														"destination" : [ "obj-85", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-37", 0 ],
														"destination" : [ "obj-86", 1 ],
														"midpoints" : [ 1014.5, 410.0, 929.0, 410.0, 929.0, 358.0, 725.0, 358.0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-66", 0 ],
														"destination" : [ "obj-89", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-75", 0 ],
														"destination" : [ "obj-66", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-50", 0 ],
														"destination" : [ "obj-83", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-76", 0 ],
														"destination" : [ "obj-79", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-77", 0 ],
														"destination" : [ "obj-76", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-78", 0 ],
														"destination" : [ "obj-88", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-79", 0 ],
														"destination" : [ "obj-36", 0 ],
														"order" : 0
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-79", 0 ],
														"destination" : [ "obj-87", 0 ],
														"order" : 1
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-83", 1 ],
														"destination" : [ "obj-82", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-83", 0 ],
														"destination" : [ "obj-90", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-84", 0 ],
														"destination" : [ "obj-78", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-85", 0 ],
														"destination" : [ "obj-80", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-86", 0 ],
														"destination" : [ "obj-85", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-87", 0 ],
														"destination" : [ "obj-86", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-80", 1 ],
														"destination" : [ "obj-81", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-80", 0 ],
														"destination" : [ "obj-83", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-88", 0 ],
														"destination" : [ "obj-37", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-89", 0 ],
														"destination" : [ "obj-38", 0 ],
														"order" : 0
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-89", 0 ],
														"destination" : [ "obj-88", 0 ],
														"order" : 1
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-35", 0 ],
														"destination" : [ "obj-40", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 1 ],
														"destination" : [ "obj-47", 1 ],
														"midpoints" : [ 293.5, 114.0, 349.0, 114.0, 349.0, 70.0, 883.5, 70.0 ]
													}

												}
 ],
											"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
										}

									}
,
									"id" : "obj-99",
									"maxclass" : "newobj",
									"numinlets" : 8,
									"numoutlets" : 4,
									"outlettype" : [ "signal", "signal", "signal", "signal" ],
									"patching_rect" : [ 110.0, 183.0, 223.0, 23.0 ],
									"rnbo_classname" : "gen~",
									"rnbo_extra_attributes" : 									{
										"exposeparams" : 0
									}
,
									"rnbo_serial" : 1,
									"rnbo_uniqueid" : "cloud2",
									"rnboinfo" : 									{
										"needsInstanceInfo" : 1,
										"argnames" : 										{
											"in1" : 											{
												"attrOrProp" : 1,
												"digest" : "in1",
												"isalias" : 0,
												"aliases" : [  ],
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"inlet" : 1,
												"type" : "number"
											}
,
											"reset" : 											{
												"attrOrProp" : 1,
												"digest" : "Reset all param and history objects to initial values",
												"isalias" : 0,
												"aliases" : [  ],
												"attachable" : 1,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "bang"
											}
,
											"expr" : 											{
												"attrOrProp" : 2,
												"digest" : "a gen expression",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"doNotShowInMaxInspector" : 1
											}
,
											"file" : 											{
												"attrOrProp" : 2,
												"digest" : "gendsp file to load",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"doNotShowInMaxInspector" : 1
											}
,
											"title" : 											{
												"attrOrProp" : 2,
												"digest" : "a title",
												"defaultarg" : 1,
												"isalias" : 0,
												"aliases" : [ "t" ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"doNotShowInMaxInspector" : 1
											}
,
											"t" : 											{
												"attrOrProp" : 2,
												"digest" : "a title",
												"defaultarg" : 1,
												"isalias" : 1,
												"aliasOf" : "title",
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol"
											}
,
											"exposeparams" : 											{
												"attrOrProp" : 2,
												"digest" : "Expose gen params as RNBO params.",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "bool",
												"defaultValue" : "false"
											}

										}
,
										"inputs" : [ 											{
												"name" : "in1",
												"type" : "auto",
												"digest" : "in1",
												"hot" : 1,
												"docked" : 0
											}
, 											{
												"name" : "in2",
												"type" : "auto"
											}
, 											{
												"name" : "in3",
												"type" : "auto"
											}
, 											{
												"name" : "in4",
												"type" : "auto"
											}
, 											{
												"name" : "in5",
												"type" : "auto"
											}
, 											{
												"name" : "in6",
												"type" : "auto"
											}
, 											{
												"name" : "in7",
												"type" : "auto"
											}
, 											{
												"name" : "in8",
												"type" : "auto"
											}
 ],
										"outputs" : [ 											{
												"name" : "out1",
												"type" : "signal"
											}
, 											{
												"name" : "out2",
												"type" : "signal"
											}
, 											{
												"name" : "out3",
												"type" : "signal"
											}
, 											{
												"name" : "out4",
												"type" : "signal"
											}
 ],
										"helpname" : "gen~",
										"aliasOf" : "gen~",
										"classname" : "gen~",
										"operator" : 0,
										"versionId" : 1405647718,
										"changesPatcherIO" : 0
									}
,
									"text" : "gen~ @t cloud2",
									"varname" : "cloud2"
								}

							}
, 							{
								"box" : 								{
									"genpatcher" : 									{
										"patcher" : 										{
											"fileversion" : 1,
											"appversion" : 											{
												"major" : 8,
												"minor" : 6,
												"revision" : 2,
												"architecture" : "x64",
												"modernui" : 1
											}
,
											"classnamespace" : "dsp.gen",
											"rect" : [ 426.0, 322.0, 936.0, 600.0 ],
											"bglocked" : 0,
											"openinpresentation" : 0,
											"default_fontsize" : 12.0,
											"default_fontface" : 0,
											"default_fontname" : "Arial",
											"gridonopen" : 1,
											"gridsize" : [ 15.0, 15.0 ],
											"gridsnaponopen" : 1,
											"objectsnaponopen" : 1,
											"statusbarvisible" : 2,
											"toolbarvisible" : 1,
											"lefttoolbarpinned" : 0,
											"toptoolbarpinned" : 0,
											"righttoolbarpinned" : 0,
											"bottomtoolbarpinned" : 0,
											"toolbars_unpinned_last_save" : 0,
											"tallnewobj" : 0,
											"boxanimatetime" : 200,
											"enablehscroll" : 1,
											"enablevscroll" : 1,
											"devicewidth" : 0.0,
											"description" : "",
											"digest" : "",
											"tags" : "",
											"style" : "",
											"subpatcher_template" : "",
											"assistshowspatchername" : 0,
											"boxes" : [ 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title posminmax",
														"id" : "obj-65",
														"numinlets" : 4,
														"numoutlets" : 2,
														"patching_rect" : [ 287.0, 296.0, 129.0, 22.0 ],
														"outlettype" : [ "", "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 142.0, 430.0, 284.0, 316.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "1",
																		"id" : "obj-10",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 182.499954000000002, 222.0, 19.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "maximum 1",
																		"id" : "obj-9",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 64.125, 136.0, 73.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "buffer len",
																		"id" : "obj-6",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 215.083281999999997, 6.0, 60.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "speed",
																		"id" : "obj-5",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 142.25, 6.0, 43.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "freq",
																		"id" : "obj-4",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 64.125, 6.0, 31.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "position",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 1.75, 6.0, 52.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "clip",
																		"id" : "obj-51",
																		"numinlets" : 3,
																		"numoutlets" : 1,
																		"patching_rect" : [ 136.916626000000008, 251.5, 110.166656000000003, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "clip",
																		"id" : "obj-52",
																		"numinlets" : 3,
																		"numoutlets" : 1,
																		"patching_rect" : [ 37.583343999999997, 251.5, 86.833320999999998, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "- 1",
																		"id" : "obj-53",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 188.416626000000008, 178.5, 25.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "+ in1",
																		"id" : "obj-28",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 136.916626000000008, 178.5, 37.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "!- in1",
																		"id" : "obj-27",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 37.0, 178.5, 37.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-15",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 64.125, 102.5, 103.625, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "!/ samplerate",
																		"id" : "obj-1",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 64.125, 72.0, 80.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-55",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 64.125, 29.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-57",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 12.75, 29.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 3",
																		"id" : "obj-61",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 148.75, 29.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 4",
																		"id" : "obj-62",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 228.083281999999997, 29.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-63",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 37.583343999999997, 282.5, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 2",
																		"id" : "obj-64",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 136.916626000000008, 282.5, 37.0, 22.0 ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-9", 0 ],
																		"destination" : [ "obj-28", 0 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-9", 0 ],
																		"destination" : [ "obj-27", 0 ],
																		"order" : 1
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-62", 0 ],
																		"destination" : [ "obj-53", 0 ],
																		"order" : 1
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-62", 0 ],
																		"destination" : [ "obj-51", 2 ],
																		"order" : 0
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-61", 0 ],
																		"destination" : [ "obj-15", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-55", 0 ],
																		"destination" : [ "obj-1", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-53", 0 ],
																		"destination" : [ "obj-52", 2 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-52", 0 ],
																		"destination" : [ "obj-63", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-51", 0 ],
																		"destination" : [ "obj-64", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-28", 0 ],
																		"destination" : [ "obj-51", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-27", 0 ],
																		"destination" : [ "obj-52", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-15", 0 ],
																		"destination" : [ "obj-9", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-10", 0 ],
																		"destination" : [ "obj-51", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-1", 0 ],
																		"destination" : [ "obj-15", 0 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "buffer sample",
														"id" : "obj-54",
														"numinlets" : 0,
														"numoutlets" : 2,
														"patching_rect" : [ 458.0, 335.0, 83.0, 22.0 ],
														"outlettype" : [ "", "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param speedcurve @min 0. @max 500.",
														"id" : "obj-31",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 623.0, 274.0, 230.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "sample speed",
														"id" : "obj-32",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 416.0, 255.0, 85.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title variation",
														"id" : "obj-34",
														"numinlets" : 3,
														"numoutlets" : 1,
														"patching_rect" : [ 482.0, 298.0, 160.0, 22.0 ],
														"outlettype" : [ "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 1488.0, 746.0, 209.0, 215.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 3",
																		"id" : "obj-1",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 143.0, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 49.333312999999997, 163.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "noise",
																		"id" : "obj-24",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 6.0, 9.0, 39.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "scale -1 1",
																		"id" : "obj-23",
																		"numinlets" : 4,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 55.0, 63.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-26",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 63.999977000000001, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-27",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 98.999984999999995, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-27", 0 ],
																		"destination" : [ "obj-23", 2 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-26", 0 ],
																		"destination" : [ "obj-23", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-24", 0 ],
																		"destination" : [ "obj-23", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-23", 0 ],
																		"destination" : [ "obj-3", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-1", 0 ],
																		"destination" : [ "obj-23", 3 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param speedmax @min 0. @max 1000.",
														"id" : "obj-35",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 515.0, 249.0, 221.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param speedmin @min 0. @max 1000.",
														"id" : "obj-37",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 482.0, 224.0, 218.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 4",
														"id" : "obj-20",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 287.0, 331.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param poscurve @min 0. @max 500.",
														"id" : "obj-2",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 396.0, 83.0, 208.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "position",
														"id" : "obj-12",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 366.0, 5.0, 52.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title variation",
														"id" : "obj-14",
														"numinlets" : 3,
														"numoutlets" : 1,
														"patching_rect" : [ 287.0, 111.0, 160.0, 22.0 ],
														"outlettype" : [ "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 209.0, 215.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 3",
																		"id" : "obj-1",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 143.0, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 49.333312999999997, 163.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "noise",
																		"id" : "obj-24",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 6.0, 9.0, 39.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "scale -1 1",
																		"id" : "obj-23",
																		"numinlets" : 4,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 55.0, 63.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-26",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 63.999977000000001, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-27",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 98.999984999999995, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-27", 0 ],
																		"destination" : [ "obj-23", 2 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-26", 0 ],
																		"destination" : [ "obj-23", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-24", 0 ],
																		"destination" : [ "obj-23", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-23", 0 ],
																		"destination" : [ "obj-3", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-1", 0 ],
																		"destination" : [ "obj-23", 3 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param posmax @min 0. @max 100000.",
														"id" : "obj-16",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 316.0, 55.0, 221.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param posmin @min 0. @max 100000.",
														"id" : "obj-17",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 287.0, 27.0, 218.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param revcurve @min 0. @max 500.",
														"id" : "obj-8",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 320.0, 433.0, 205.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param ampcurve @min 0. @max 500.",
														"id" : "obj-7",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 83.0, 402.0, 212.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param freqcurve @min 0. @max 500.",
														"id" : "obj-5",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 450.0, 196.0, 209.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param durcurve @min 0. @max 500.",
														"id" : "obj-3",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 83.0, 83.0, 206.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain trigger",
														"id" : "obj-47",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 90.0, 289.0, 75.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "\"phasor\" increment",
														"linecount" : 2,
														"id" : "obj-42",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 181.0, 159.0, 62.0, 33.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 8",
														"id" : "obj-41",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 532.0, 472.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain pan",
														"id" : "obj-30",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 626.0, 375.0, 61.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title variation",
														"id" : "obj-48",
														"numinlets" : 2,
														"numoutlets" : 1,
														"patching_rect" : [ 532.0, 439.0, 160.0, 22.0 ],
														"outlettype" : [ "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 192.0, 253.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "clip 0 1",
																		"id" : "obj-4",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 163.0, 49.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 49.333312999999997, 219.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "noise",
																		"id" : "obj-24",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 6.0, 9.0, 39.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "scale -1 1",
																		"id" : "obj-23",
																		"numinlets" : 4,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 55.0, 63.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-26",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 63.999977000000001, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-27",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 98.999984999999995, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-4", 0 ],
																		"destination" : [ "obj-3", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-27", 0 ],
																		"destination" : [ "obj-23", 2 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-26", 0 ],
																		"destination" : [ "obj-23", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-24", 0 ],
																		"destination" : [ "obj-23", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-23", 0 ],
																		"destination" : [ "obj-4", 0 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param panmax",
														"id" : "obj-49",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 565.0, 402.0, 91.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param panmin",
														"id" : "obj-50",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 532.0, 375.0, 87.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 7",
														"id" : "obj-29",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 287.0, 499.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain rev",
														"id" : "obj-56",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 349.0, 500.0, 57.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title variation",
														"id" : "obj-58",
														"numinlets" : 3,
														"numoutlets" : 1,
														"patching_rect" : [ 287.0, 466.0, 160.0, 22.0 ],
														"outlettype" : [ "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 192.0, 253.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 3",
																		"id" : "obj-1",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 138.999985000000009, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "clip 0 1",
																		"id" : "obj-4",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 163.0, 49.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 49.333312999999997, 219.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "noise",
																		"id" : "obj-24",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 6.0, 9.0, 39.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "scale -1 1",
																		"id" : "obj-23",
																		"numinlets" : 4,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 55.0, 63.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-26",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 63.999977000000001, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-27",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 98.999984999999995, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-4", 0 ],
																		"destination" : [ "obj-3", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-27", 0 ],
																		"destination" : [ "obj-23", 2 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-26", 0 ],
																		"destination" : [ "obj-23", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-24", 0 ],
																		"destination" : [ "obj-23", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-23", 0 ],
																		"destination" : [ "obj-4", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-1", 0 ],
																		"destination" : [ "obj-23", 3 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param revmax @min 0. @max 2.",
														"id" : "obj-59",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 308.0, 402.0, 185.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param revmin @min 0. @max 2.",
														"id" : "obj-60",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 287.0, 375.0, 182.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 6",
														"id" : "obj-26",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 50.0, 472.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain amp",
														"id" : "obj-25",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 7.0, 373.0, 64.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title variation",
														"id" : "obj-44",
														"numinlets" : 3,
														"numoutlets" : 1,
														"patching_rect" : [ 50.0, 441.0, 160.0, 22.0 ],
														"outlettype" : [ "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 192.0, 253.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 3",
																		"id" : "obj-1",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 138.999985000000009, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "clip 0 1",
																		"id" : "obj-4",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 163.0, 49.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 49.333312999999997, 219.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "noise",
																		"id" : "obj-24",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 6.0, 9.0, 39.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "scale -1 1",
																		"id" : "obj-23",
																		"numinlets" : 4,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 55.0, 63.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-26",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 63.999977000000001, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-27",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 98.999984999999995, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-4", 0 ],
																		"destination" : [ "obj-3", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-27", 0 ],
																		"destination" : [ "obj-23", 2 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-26", 0 ],
																		"destination" : [ "obj-23", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-24", 0 ],
																		"destination" : [ "obj-23", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-23", 0 ],
																		"destination" : [ "obj-4", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-1", 0 ],
																		"destination" : [ "obj-23", 3 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param ampmax @min 0. @max 2.",
														"id" : "obj-45",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 83.0, 373.0, 192.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param ampmin @min 0. @max 2.",
														"id" : "obj-46",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 50.0, 345.0, 188.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 5",
														"id" : "obj-24",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 397.0, 335.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 3",
														"id" : "obj-13",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 342.0, 254.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "oscil freq",
														"id" : "obj-18",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 267.0, 146.0, 61.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title variation",
														"id" : "obj-33",
														"numinlets" : 3,
														"numoutlets" : 1,
														"patching_rect" : [ 324.0, 224.0, 145.0, 22.0 ],
														"outlettype" : [ "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 209.0, 215.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 3",
																		"id" : "obj-1",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 143.0, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 49.333312999999997, 163.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "noise",
																		"id" : "obj-24",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 6.0, 9.0, 39.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "scale -1 1",
																		"id" : "obj-23",
																		"numinlets" : 4,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 55.0, 63.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-26",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 63.999977000000001, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-27",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 98.999984999999995, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-27", 0 ],
																		"destination" : [ "obj-23", 2 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-26", 0 ],
																		"destination" : [ "obj-23", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-24", 0 ],
																		"destination" : [ "obj-23", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-23", 0 ],
																		"destination" : [ "obj-3", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-1", 0 ],
																		"destination" : [ "obj-23", 3 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param freqmax @min 0. @max 1000.",
														"id" : "obj-22",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 346.0, 170.0, 209.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param freqmin @min 0. @max 1000.",
														"id" : "obj-21",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 324.0, 145.0, 206.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "duration",
														"id" : "obj-19",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 206.0, 5.0, 54.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title variation",
														"id" : "obj-38",
														"numinlets" : 3,
														"numoutlets" : 1,
														"patching_rect" : [ 50.0, 123.0, 160.0, 22.0 ],
														"outlettype" : [ "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 59.0, 104.0, 209.0, 215.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 3",
																		"id" : "obj-1",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 143.0, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 49.333312999999997, 163.0, 37.0, 22.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "noise",
																		"id" : "obj-24",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 6.0, 9.0, 39.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "scale -1 1",
																		"id" : "obj-23",
																		"numinlets" : 4,
																		"numoutlets" : 1,
																		"patching_rect" : [ 49.333312999999997, 55.0, 63.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-26",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 63.999977000000001, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 2",
																		"id" : "obj-27",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 98.999984999999995, 9.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-27", 0 ],
																		"destination" : [ "obj-23", 2 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-26", 0 ],
																		"destination" : [ "obj-23", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-24", 0 ],
																		"destination" : [ "obj-23", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-23", 0 ],
																		"destination" : [ "obj-3", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-1", 0 ],
																		"destination" : [ "obj-23", 3 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param durmax @min 0.1 @max 1000.",
														"id" : "obj-39",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 65.0, 55.0, 212.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param durmin @min 0. @max 500.",
														"id" : "obj-40",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 50.0, 27.0, 196.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "param density @min 0. @max 500.",
														"id" : "obj-36",
														"numinlets" : 0,
														"numoutlets" : 1,
														"patching_rect" : [ 50.0, 212.0, 197.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "comment",
														"text" : "grain dens",
														"id" : "obj-11",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 65.0, 236.0, 67.0, 20.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 1",
														"id" : "obj-10",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 140.0, 159.0, 37.0, 22.0 ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "/ samplerate",
														"id" : "obj-9",
														"numinlets" : 1,
														"numoutlets" : 1,
														"patching_rect" : [ 50.0, 159.0, 77.0, 22.0 ],
														"outlettype" : [ "" ]
													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "gen @title randclick",
														"id" : "obj-6",
														"numinlets" : 1,
														"numoutlets" : 1,
														"patching_rect" : [ 50.0, 260.0, 115.0, 22.0 ],
														"outlettype" : [ "" ],
														"patcher" : 														{
															"fileversion" : 1,
															"appversion" : 															{
																"major" : 8,
																"minor" : 6,
																"revision" : 2,
																"architecture" : "x64",
																"modernui" : 1
															}
,
															"classnamespace" : "dsp.gen",
															"rect" : [ 668.0, 150.0, 181.0, 289.0 ],
															"bglocked" : 0,
															"openinpresentation" : 0,
															"default_fontsize" : 12.0,
															"default_fontface" : 0,
															"default_fontname" : "Arial",
															"gridonopen" : 1,
															"gridsize" : [ 15.0, 15.0 ],
															"gridsnaponopen" : 1,
															"objectsnaponopen" : 1,
															"statusbarvisible" : 2,
															"toolbarvisible" : 1,
															"lefttoolbarpinned" : 0,
															"toptoolbarpinned" : 0,
															"righttoolbarpinned" : 0,
															"bottomtoolbarpinned" : 0,
															"toolbars_unpinned_last_save" : 0,
															"tallnewobj" : 0,
															"boxanimatetime" : 200,
															"enablehscroll" : 1,
															"enablevscroll" : 1,
															"devicewidth" : 0.0,
															"description" : "",
															"digest" : "",
															"tags" : "",
															"style" : "",
															"subpatcher_template" : "",
															"assistshowspatchername" : 0,
															"boxes" : [ 																{
																	"box" : 																	{
																		"maxclass" : "comment",
																		"text" : "density",
																		"id" : "obj-3",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 23.0, 64.0, 49.0, 20.0 ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "noise",
																		"id" : "obj-11",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 15.0, 167.0, 39.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : ">",
																		"id" : "obj-10",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 43.0, 217.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "!- 1",
																		"id" : "obj-9",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 70.0, 167.0, 28.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "*",
																		"id" : "obj-8",
																		"numinlets" : 2,
																		"numoutlets" : 1,
																		"patching_rect" : [ 70.0, 128.0, 29.5, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "!/ 1.",
																		"id" : "obj-7",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 107.0, 75.0, 31.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "* 0.5",
																		"id" : "obj-6",
																		"numinlets" : 1,
																		"numoutlets" : 1,
																		"patching_rect" : [ 107.0, 40.0, 35.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "samplerate",
																		"id" : "obj-5",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 107.0, 8.0, 70.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "in 1",
																		"id" : "obj-1",
																		"numinlets" : 0,
																		"numoutlets" : 1,
																		"patching_rect" : [ 70.0, 64.0, 30.0, 22.0 ],
																		"outlettype" : [ "" ]
																	}

																}
, 																{
																	"box" : 																	{
																		"maxclass" : "newobj",
																		"text" : "out 1",
																		"id" : "obj-4",
																		"numinlets" : 1,
																		"numoutlets" : 0,
																		"patching_rect" : [ 43.0, 260.0, 37.0, 22.0 ]
																	}

																}
 ],
															"lines" : [ 																{
																	"patchline" : 																	{
																		"source" : [ "obj-9", 0 ],
																		"destination" : [ "obj-10", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-8", 0 ],
																		"destination" : [ "obj-9", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-7", 0 ],
																		"destination" : [ "obj-8", 1 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-6", 0 ],
																		"destination" : [ "obj-7", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-5", 0 ],
																		"destination" : [ "obj-6", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-11", 0 ],
																		"destination" : [ "obj-10", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-10", 0 ],
																		"destination" : [ "obj-4", 0 ]
																	}

																}
, 																{
																	"patchline" : 																	{
																		"source" : [ "obj-1", 0 ],
																		"destination" : [ "obj-8", 0 ]
																	}

																}
 ],
															"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
														}

													}

												}
, 												{
													"box" : 													{
														"maxclass" : "newobj",
														"text" : "out 2",
														"id" : "obj-4",
														"numinlets" : 1,
														"numoutlets" : 0,
														"patching_rect" : [ 50.0, 289.0, 37.0, 22.0 ]
													}

												}
 ],
											"lines" : [ 												{
													"patchline" : 													{
														"source" : [ "obj-9", 0 ],
														"destination" : [ "obj-10", 0 ],
														"midpoints" : [ 59.5, 191.5, 132.5, 191.5, 132.5, 153.5, 149.5, 153.5 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-65", 1 ],
														"destination" : [ "obj-24", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-65", 0 ],
														"destination" : [ "obj-20", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-6", 0 ],
														"destination" : [ "obj-4", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-58", 0 ],
														"destination" : [ "obj-29", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-54", 0 ],
														"destination" : [ "obj-65", 3 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-50", 0 ],
														"destination" : [ "obj-48", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-49", 0 ],
														"destination" : [ "obj-48", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-48", 0 ],
														"destination" : [ "obj-41", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-44", 0 ],
														"destination" : [ "obj-26", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-38", 0 ],
														"destination" : [ "obj-9", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-34", 0 ],
														"destination" : [ "obj-65", 2 ],
														"midpoints" : [ 491.5, 326.0, 452.083330999999987, 326.0, 452.083330999999987, 284.0, 369.833333333333314, 284.0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-33", 0 ],
														"destination" : [ "obj-65", 1 ],
														"order" : 1
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-33", 0 ],
														"destination" : [ "obj-13", 0 ],
														"order" : 0
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-14", 0 ],
														"destination" : [ "obj-65", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-40", 0 ],
														"destination" : [ "obj-38", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-39", 0 ],
														"destination" : [ "obj-38", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-3", 0 ],
														"destination" : [ "obj-38", 2 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-17", 0 ],
														"destination" : [ "obj-14", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-16", 0 ],
														"destination" : [ "obj-14", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-2", 0 ],
														"destination" : [ "obj-14", 2 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-36", 0 ],
														"destination" : [ "obj-6", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-21", 0 ],
														"destination" : [ "obj-33", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-22", 0 ],
														"destination" : [ "obj-33", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-5", 0 ],
														"destination" : [ "obj-33", 2 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-37", 0 ],
														"destination" : [ "obj-34", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-35", 0 ],
														"destination" : [ "obj-34", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-31", 0 ],
														"destination" : [ "obj-34", 2 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-46", 0 ],
														"destination" : [ "obj-44", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-45", 0 ],
														"destination" : [ "obj-44", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-7", 0 ],
														"destination" : [ "obj-44", 2 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-60", 0 ],
														"destination" : [ "obj-58", 0 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-59", 0 ],
														"destination" : [ "obj-58", 1 ]
													}

												}
, 												{
													"patchline" : 													{
														"source" : [ "obj-8", 0 ],
														"destination" : [ "obj-58", 2 ]
													}

												}
 ],
											"editing_bgcolor" : [ 0.9, 0.9, 0.9, 1.0 ]
										}

									}
,
									"id" : "obj-81",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 8,
									"outlettype" : [ "signal", "signal", "signal", "signal", "signal", "signal", "signal", "signal" ],
									"patching_rect" : [ 110.0, 105.0, 223.0, 23.0 ],
									"rnbo_classname" : "gen~",
									"rnbo_serial" : 2,
									"rnbo_uniqueid" : "grain_params",
									"rnboinfo" : 									{
										"needsInstanceInfo" : 1,
										"argnames" : 										{
											"in1" : 											{
												"attrOrProp" : 1,
												"digest" : "in1",
												"isalias" : 0,
												"aliases" : [  ],
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"inlet" : 1,
												"type" : "number"
											}
,
											"reset" : 											{
												"attrOrProp" : 1,
												"digest" : "Reset all param and history objects to initial values",
												"isalias" : 0,
												"aliases" : [  ],
												"attachable" : 1,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "bang"
											}
,
											"expr" : 											{
												"attrOrProp" : 2,
												"digest" : "a gen expression",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"doNotShowInMaxInspector" : 1
											}
,
											"file" : 											{
												"attrOrProp" : 2,
												"digest" : "gendsp file to load",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"doNotShowInMaxInspector" : 1
											}
,
											"title" : 											{
												"attrOrProp" : 2,
												"digest" : "a title",
												"defaultarg" : 1,
												"isalias" : 0,
												"aliases" : [ "t" ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"doNotShowInMaxInspector" : 1
											}
,
											"t" : 											{
												"attrOrProp" : 2,
												"digest" : "a title",
												"defaultarg" : 1,
												"isalias" : 1,
												"aliasOf" : "title",
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol"
											}
,
											"exposeparams" : 											{
												"attrOrProp" : 2,
												"digest" : "Expose gen params as RNBO params.",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "bool",
												"defaultValue" : "false"
											}

										}
,
										"inputs" : [ 											{
												"name" : "in1",
												"type" : "auto",
												"digest" : "in1",
												"hot" : 1,
												"docked" : 0
											}
 ],
										"outputs" : [ 											{
												"name" : "out1",
												"type" : "signal"
											}
, 											{
												"name" : "out2",
												"type" : "signal"
											}
, 											{
												"name" : "out3",
												"type" : "signal"
											}
, 											{
												"name" : "out4",
												"type" : "signal"
											}
, 											{
												"name" : "out5",
												"type" : "signal"
											}
, 											{
												"name" : "out6",
												"type" : "signal"
											}
, 											{
												"name" : "out7",
												"type" : "signal"
											}
, 											{
												"name" : "out8",
												"type" : "signal"
											}
 ],
										"helpname" : "gen~",
										"aliasOf" : "gen~",
										"classname" : "gen~",
										"operator" : 0,
										"versionId" : 1405647718,
										"changesPatcherIO" : 0
									}
,
									"text" : "gen~ @t grain_params @exposeparams 1",
									"varname" : "grain_params"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-4",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 334.0, 385.0, 43.0, 23.0 ],
									"rnbo_classname" : "out~",
									"rnbo_extra_attributes" : 									{
										"meta" : "",
										"comment" : ""
									}
,
									"rnbo_serial" : 1,
									"rnbo_uniqueid" : "out~_obj-4",
									"rnboinfo" : 									{
										"needsInstanceInfo" : 1,
										"argnames" : 										{
											"in1" : 											{
												"attrOrProp" : 1,
												"digest" : "signal sent to outlet with index 4",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 0,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"inlet" : 1,
												"type" : "signal"
											}
,
											"index" : 											{
												"attrOrProp" : 2,
												"digest" : "outlet number",
												"defaultarg" : 1,
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "number",
												"mandatory" : 1
											}
,
											"comment" : 											{
												"attrOrProp" : 2,
												"digest" : "mouse over comment",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol"
											}
,
											"meta" : 											{
												"attrOrProp" : 2,
												"digest" : "A JSON formatted string containing metadata for use by the exported code",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"defaultValue" : "",
												"label" : "Metadata",
												"displayorder" : 3
											}

										}
,
										"inputs" : [ 											{
												"name" : "in1",
												"type" : "signal",
												"digest" : "signal sent to outlet with index 4",
												"displayName" : "",
												"hot" : 1,
												"docked" : 0
											}
 ],
										"outputs" : [  ],
										"helpname" : "out~",
										"aliasOf" : "out~",
										"classname" : "out~",
										"operator" : 0,
										"versionId" : 374499139,
										"changesPatcherIO" : 1
									}
,
									"text" : "out~ 4"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-5",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 264.0, 385.0, 43.0, 23.0 ],
									"rnbo_classname" : "out~",
									"rnbo_extra_attributes" : 									{
										"meta" : "",
										"comment" : ""
									}
,
									"rnbo_serial" : 2,
									"rnbo_uniqueid" : "out~_obj-5",
									"rnboinfo" : 									{
										"needsInstanceInfo" : 1,
										"argnames" : 										{
											"in1" : 											{
												"attrOrProp" : 1,
												"digest" : "signal sent to outlet with index 3",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 0,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"inlet" : 1,
												"type" : "signal"
											}
,
											"index" : 											{
												"attrOrProp" : 2,
												"digest" : "outlet number",
												"defaultarg" : 1,
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "number",
												"mandatory" : 1
											}
,
											"comment" : 											{
												"attrOrProp" : 2,
												"digest" : "mouse over comment",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol"
											}
,
											"meta" : 											{
												"attrOrProp" : 2,
												"digest" : "A JSON formatted string containing metadata for use by the exported code",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"defaultValue" : "",
												"label" : "Metadata",
												"displayorder" : 3
											}

										}
,
										"inputs" : [ 											{
												"name" : "in1",
												"type" : "signal",
												"digest" : "signal sent to outlet with index 3",
												"displayName" : "",
												"hot" : 1,
												"docked" : 0
											}
 ],
										"outputs" : [  ],
										"helpname" : "out~",
										"aliasOf" : "out~",
										"classname" : "out~",
										"operator" : 0,
										"versionId" : 374499139,
										"changesPatcherIO" : 1
									}
,
									"text" : "out~ 3"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 161.0, 385.0, 43.0, 23.0 ],
									"rnbo_classname" : "out~",
									"rnbo_extra_attributes" : 									{
										"meta" : "",
										"comment" : ""
									}
,
									"rnbo_serial" : 3,
									"rnbo_uniqueid" : "out~_obj-3",
									"rnboinfo" : 									{
										"needsInstanceInfo" : 1,
										"argnames" : 										{
											"in1" : 											{
												"attrOrProp" : 1,
												"digest" : "signal sent to outlet with index 2",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 0,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"inlet" : 1,
												"type" : "signal"
											}
,
											"index" : 											{
												"attrOrProp" : 2,
												"digest" : "outlet number",
												"defaultarg" : 1,
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "number",
												"mandatory" : 1
											}
,
											"comment" : 											{
												"attrOrProp" : 2,
												"digest" : "mouse over comment",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol"
											}
,
											"meta" : 											{
												"attrOrProp" : 2,
												"digest" : "A JSON formatted string containing metadata for use by the exported code",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"defaultValue" : "",
												"label" : "Metadata",
												"displayorder" : 3
											}

										}
,
										"inputs" : [ 											{
												"name" : "in1",
												"type" : "signal",
												"digest" : "signal sent to outlet with index 2",
												"displayName" : "",
												"hot" : 1,
												"docked" : 0
											}
 ],
										"outputs" : [  ],
										"helpname" : "out~",
										"aliasOf" : "out~",
										"classname" : "out~",
										"operator" : 0,
										"versionId" : 374499139,
										"changesPatcherIO" : 1
									}
,
									"text" : "out~ 2"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 92.0, 385.0, 43.0, 23.0 ],
									"rnbo_classname" : "out~",
									"rnbo_extra_attributes" : 									{
										"meta" : "",
										"comment" : ""
									}
,
									"rnbo_serial" : 4,
									"rnbo_uniqueid" : "out~_obj-2",
									"rnboinfo" : 									{
										"needsInstanceInfo" : 1,
										"argnames" : 										{
											"in1" : 											{
												"attrOrProp" : 1,
												"digest" : "signal sent to outlet with index 1",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 0,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"inlet" : 1,
												"type" : "signal"
											}
,
											"index" : 											{
												"attrOrProp" : 2,
												"digest" : "outlet number",
												"defaultarg" : 1,
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "number",
												"mandatory" : 1
											}
,
											"comment" : 											{
												"attrOrProp" : 2,
												"digest" : "mouse over comment",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol"
											}
,
											"meta" : 											{
												"attrOrProp" : 2,
												"digest" : "A JSON formatted string containing metadata for use by the exported code",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"defaultValue" : "",
												"label" : "Metadata",
												"displayorder" : 3
											}

										}
,
										"inputs" : [ 											{
												"name" : "in1",
												"type" : "signal",
												"digest" : "signal sent to outlet with index 1",
												"displayName" : "",
												"hot" : 1,
												"docked" : 0
											}
 ],
										"outputs" : [  ],
										"helpname" : "out~",
										"aliasOf" : "out~",
										"classname" : "out~",
										"operator" : 0,
										"versionId" : 374499139,
										"changesPatcherIO" : 1
									}
,
									"text" : "out~ 1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-1",
									"maxclass" : "newobj",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 105.0, 34.0, 28.0, 23.0 ],
									"rnbo_classname" : "in",
									"rnbo_extra_attributes" : 									{
										"meta" : "",
										"comment" : ""
									}
,
									"rnbo_serial" : 1,
									"rnbo_uniqueid" : "in_obj-1",
									"rnboinfo" : 									{
										"needsInstanceInfo" : 1,
										"argnames" : 										{
											"index" : 											{
												"attrOrProp" : 2,
												"digest" : "inlet number",
												"defaultarg" : 1,
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "number",
												"mandatory" : 1
											}
,
											"comment" : 											{
												"attrOrProp" : 2,
												"digest" : "mouse over comment",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol"
											}
,
											"meta" : 											{
												"attrOrProp" : 2,
												"digest" : "A JSON formatted string containing metadata for use by the exported code",
												"isalias" : 0,
												"aliases" : [  ],
												"settable" : 1,
												"attachable" : 0,
												"isparam" : 0,
												"deprecated" : 0,
												"type" : "symbol",
												"defaultValue" : "",
												"label" : "Metadata",
												"displayorder" : 3
											}

										}
,
										"inputs" : [  ],
										"outputs" : [ 											{
												"name" : "out1",
												"type" : [ "bang", "number", "list" ],
												"digest" : "value from inlet with index 1",
												"displayName" : "",
												"docked" : 0
											}
 ],
										"helpname" : "in",
										"aliasOf" : "in",
										"classname" : "in",
										"operator" : 0,
										"versionId" : 1219109108,
										"changesPatcherIO" : 1
									}
,
									"text" : "in 1"
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-81", 0 ],
									"source" : [ "obj-1", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-99", 7 ],
									"source" : [ "obj-81", 7 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-99", 6 ],
									"source" : [ "obj-81", 6 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-99", 5 ],
									"source" : [ "obj-81", 5 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-99", 4 ],
									"source" : [ "obj-81", 4 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-99", 3 ],
									"source" : [ "obj-81", 3 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-99", 2 ],
									"source" : [ "obj-81", 2 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-99", 1 ],
									"source" : [ "obj-81", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-99", 0 ],
									"source" : [ "obj-81", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"source" : [ "obj-99", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"source" : [ "obj-99", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-4", 0 ],
									"source" : [ "obj-99", 3 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-5", 0 ],
									"source" : [ "obj-99", 2 ]
								}

							}
 ],
						"default_bgcolor" : [ 0.031372549019608, 0.125490196078431, 0.211764705882353, 1.0 ],
						"color" : [ 0.929412, 0.929412, 0.352941, 1.0 ],
						"elementcolor" : [ 0.357540726661682, 0.515565991401672, 0.861786782741547, 1.0 ],
						"accentcolor" : [ 0.343034118413925, 0.506230533123016, 0.86220508813858, 1.0 ],
						"stripecolor" : [ 0.258338063955307, 0.352425158023834, 0.511919498443604, 1.0 ],
						"bgfillcolor_type" : "color",
						"bgfillcolor_color" : [ 0.031372549019608, 0.125490196078431, 0.211764705882353, 1.0 ],
						"bgfillcolor_color1" : [ 0.031372549019608, 0.125490196078431, 0.211764705882353, 1.0 ],
						"bgfillcolor_color2" : [ 0.263682, 0.004541, 0.038797, 1.0 ],
						"bgfillcolor_angle" : 270.0,
						"bgfillcolor_proportion" : 0.39,
						"bgfillcolor_autogradient" : 0.0
					}
,
					"patching_rect" : [ 23.0, 192.0, 68.0, 22.0 ],
					"rnboattrcache" : 					{
						"grain_params/posmax" : 						{
							"label" : "grain_params/posmax",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/density" : 						{
							"label" : "grain_params/density",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/durcurve" : 						{
							"label" : "grain_params/durcurve",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/panmax" : 						{
							"label" : "grain_params/panmax",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/ampmin" : 						{
							"label" : "grain_params/ampmin",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/poscurve" : 						{
							"label" : "grain_params/poscurve",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/freqmin" : 						{
							"label" : "grain_params/freqmin",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/revmax" : 						{
							"label" : "grain_params/revmax",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/freqmax" : 						{
							"label" : "grain_params/freqmax",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/speedmax" : 						{
							"label" : "grain_params/speedmax",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/freqcurve" : 						{
							"label" : "grain_params/freqcurve",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/revcurve" : 						{
							"label" : "grain_params/revcurve",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/ampmax" : 						{
							"label" : "grain_params/ampmax",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/speedmin" : 						{
							"label" : "grain_params/speedmin",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/durmin" : 						{
							"label" : "grain_params/durmin",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/panmin" : 						{
							"label" : "grain_params/panmin",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/ampcurve" : 						{
							"label" : "grain_params/ampcurve",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/durmax" : 						{
							"label" : "grain_params/durmax",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/posmin" : 						{
							"label" : "grain_params/posmin",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/revmin" : 						{
							"label" : "grain_params/revmin",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"grain_params/speedcurve" : 						{
							"label" : "grain_params/speedcurve",
							"isEnum" : 0,
							"parsestring" : ""
						}

					}
,
					"rnboversion" : "1.2.6",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "ad719157-109d-11ef-9157-06af3f7dfb6d"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"grain_params/freqmax" : 							{
								"value" : 0.0
							}
,
							"grain_params/poscurve" : 							{
								"value" : 0.0
							}
,
							"grain_params/ampcurve" : 							{
								"value" : 0.0
							}
,
							"grain_params/durmin" : 							{
								"value" : 0.0
							}
,
							"grain_params/freqcurve" : 							{
								"value" : 0.0
							}
,
							"grain_params/revcurve" : 							{
								"value" : 0.0
							}
,
							"grain_params/posmin" : 							{
								"value" : 0.0
							}
,
							"grain_params/panmin" : 							{
								"value" : 0.0
							}
,
							"grain_params/posmax" : 							{
								"value" : 0.0
							}
,
							"grain_params/durmax" : 							{
								"value" : 0.1
							}
,
							"grain_params/ampmax" : 							{
								"value" : 0.0
							}
,
							"grain_params/revmin" : 							{
								"value" : 0.0
							}
,
							"grain_params/speedmin" : 							{
								"value" : 0.0
							}
,
							"grain_params/speedcurve" : 							{
								"value" : 0.0
							}
,
							"grain_params/freqmin" : 							{
								"value" : 0.0
							}
,
							"grain_params/durcurve" : 							{
								"value" : 0.0
							}
,
							"grain_params/speedmax" : 							{
								"value" : 0.0
							}
,
							"grain_params/revmax" : 							{
								"value" : 0.0
							}
,
							"grain_params/ampmin" : 							{
								"value" : 0.0
							}
,
							"grain_params/panmax" : 							{
								"value" : 0.0
							}
,
							"grain_params/density" : 							{
								"value" : 0.0
							}
,
							"__presetid" : "ad719157-109d-11ef-9157-06af3f7dfb6d"
						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "untitled",
									"origin" : "ad719157-109d-11ef-9157-06af3f7dfb6d",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 0,
									"snapshot" : 									{
										"grain_params/freqmax" : 										{
											"value" : 0.0
										}
,
										"grain_params/poscurve" : 										{
											"value" : 0.0
										}
,
										"grain_params/ampcurve" : 										{
											"value" : 0.0
										}
,
										"grain_params/durmin" : 										{
											"value" : 0.0
										}
,
										"grain_params/freqcurve" : 										{
											"value" : 0.0
										}
,
										"grain_params/revcurve" : 										{
											"value" : 0.0
										}
,
										"grain_params/posmin" : 										{
											"value" : 0.0
										}
,
										"grain_params/panmin" : 										{
											"value" : 0.0
										}
,
										"grain_params/posmax" : 										{
											"value" : 0.0
										}
,
										"grain_params/durmax" : 										{
											"value" : 0.1
										}
,
										"grain_params/ampmax" : 										{
											"value" : 0.0
										}
,
										"grain_params/revmin" : 										{
											"value" : 0.0
										}
,
										"grain_params/speedmin" : 										{
											"value" : 0.0
										}
,
										"grain_params/speedcurve" : 										{
											"value" : 0.0
										}
,
										"grain_params/freqmin" : 										{
											"value" : 0.0
										}
,
										"grain_params/durcurve" : 										{
											"value" : 0.0
										}
,
										"grain_params/speedmax" : 										{
											"value" : 0.0
										}
,
										"grain_params/revmax" : 										{
											"value" : 0.0
										}
,
										"grain_params/ampmin" : 										{
											"value" : 0.0
										}
,
										"grain_params/panmax" : 										{
											"value" : 0.0
										}
,
										"grain_params/density" : 										{
											"value" : 0.0
										}
,
										"__presetid" : "ad719157-109d-11ef-9157-06af3f7dfb6d"
									}
,
									"fileref" : 									{
										"name" : "untitled",
										"filename" : "untitled.maxsnap",
										"filepath" : "~/Documents/Max 8/Snapshots",
										"filepos" : -1,
										"snapshotfileid" : "890b3b486c90de64196d89c9d3798cee"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~",
					"varname" : "rnbo~"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-34",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "signal" ],
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 59.0, 104.0, 234.0, 260.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-3",
									"index" : 1,
									"maxclass" : "outlet",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 7.0, 216.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-5",
									"maxclass" : "number",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 166.0, 113.0, 53.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "bang" ],
									"patching_rect" : [ 151.333327999999995, 41.0, 60.0, 22.0 ],
									"text" : "loadbang"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-1",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 4,
									"outlettype" : [ "int", "float", "int", "int" ],
									"patching_rect" : [ 151.333327999999995, 72.0, 63.0, 22.0 ],
									"text" : "dspstate~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-16",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 49.999996000000003, 179.0, 135.0, 22.0 ],
									"text" : "*~ 44100"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-14",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 49.999996000000003, 145.0, 98.0, 22.0 ],
									"text" : "average~ 44100"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-23",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 50.0, 40.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-27",
									"index" : 2,
									"maxclass" : "outlet",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 50.0, 216.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-5", 0 ],
									"source" : [ "obj-1", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-16", 0 ],
									"source" : [ "obj-14", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-27", 0 ],
									"source" : [ "obj-16", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-1", 0 ],
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-14", 0 ],
									"order" : 0,
									"source" : [ "obj-23", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"midpoints" : [ 59.5, 95.5, 16.5, 95.5 ],
									"order" : 1,
									"source" : [ "obj-23", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-14", 0 ],
									"order" : 1,
									"source" : [ "obj-5", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-16", 1 ],
									"order" : 0,
									"source" : [ "obj-5", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 492.491821000000016, 447.0, 101.0, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p overflow_count"
				}

			}
, 			{
				"box" : 				{
					"fontface" : 0,
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"id" : "obj-15",
					"maxclass" : "number~",
					"mode" : 2,
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "float" ],
					"patching_rect" : [ 574.491820999999959, 474.0, 56.0, 22.0 ],
					"sig" : 0.0
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-12",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 113.497390999999993, 574.5, 64.0, 20.0 ],
					"text" : "Grain Env"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-8",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 509.991821000000016, 475.0, 58.0, 20.0 ],
					"text" : "Overflow"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-6",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 59.0, 104.0, 161.0, 137.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-16",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "bang" ],
									"patching_rect" : [ 15.0, 19.0, 60.0, 22.0 ],
									"text" : "loadbang"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-15",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 15.0, 47.5, 122.0, 22.0 ],
									"text" : "fill 1, apply blackman"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-6",
									"linecount" : 2,
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "float", "bang" ],
									"patching_rect" : [ 15.0, 73.5, 113.0, 35.0 ],
									"text" : "buffer~ winsample @samps 4096"
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-6", 0 ],
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-15", 0 ],
									"source" : [ "obj-16", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 6.0, 92.5, 117.0, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p winsample_maker"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-39",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 59.0, 118.0, 640.0, 480.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-45",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 50.0, 100.0, 97.0, 22.0 ],
									"text" : "prepend replace"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-34",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "float", "bang" ],
									"patching_rect" : [ 50.0, 132.0, 90.0, 22.0 ],
									"text" : "buffer~ sample"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-38",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 50.0, 40.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-45", 0 ],
									"source" : [ "obj-38", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-34", 0 ],
									"source" : [ "obj-45", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 216.761703000000011, 469.0, 74.0, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p loadbuffer"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-28",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 337.500030999999979, 469.0, 61.0, 22.0 ],
					"text" : "r towform"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-67",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 486.491790999999978, 99.0, 50.0, 22.0 ],
					"varname" : "freqCurve[2]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-68",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 486.491790999999978, 80.0, 46.0, 20.0 ],
					"text" : "Curve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-69",
					"maxclass" : "newobj",
					"numinlets" : 3,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 266.0, 390.0, 345.0, 302.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-1",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 13.0, 57.0, 35.0, 22.0 ],
									"text" : "* 0.5"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-10",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "float", "int" ],
									"patching_rect" : [ 250.0, 68.0, 76.0, 22.0 ],
									"text" : "maximum 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-9",
									"linecount" : 2,
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 250.0, 250.0, 91.0, 35.0 ],
									"text" : "grain_params/speedcurve $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-4",
									"index" : 3,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 250.0, 11.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 13.0, 269.0, 77.0, 22.0 ],
									"text" : "send tograin"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 138.0, 164.0, 114.0, 22.0 ],
									"text" : "expr $f1 + ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 164.0, 111.0, 22.0 ],
									"text" : "expr $f1 - ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-15",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 111.0, 57.0, 41.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-37",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 114.0, 57.0, 22.0 ],
									"text" : "pak 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-44",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 138.0, 222.5, 157.0, 22.0 ],
									"text" : "grain_params/speedmax $1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-46",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 195.0, 154.0, 22.0 ],
									"text" : "grain_params/speedmin $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-48",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 11.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-49",
									"index" : 2,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 111.0, 11.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 0 ],
									"source" : [ "obj-1", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-9", 0 ],
									"source" : [ "obj-10", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 1 ],
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-44", 0 ],
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"order" : 0,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"order" : 1,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-10", 0 ],
									"source" : [ "obj-4", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-44", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-46", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-1", 0 ],
									"source" : [ "obj-48", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-15", 0 ],
									"source" : [ "obj-49", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-9", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 360.491790999999978, 125.0, 145.000122000000005, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p speed"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-70",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 426.991851999999994, 80.0, 43.0, 20.0 ],
					"text" : "Var %"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-71",
					"maxclass" : "flonum",
					"maximum" : 100.0,
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 423.491851999999994, 99.0, 50.0, 22.0 ],
					"varname" : "freqVar[2]"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-72",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 360.491851999999994, 99.0, 56.0, 22.0 ],
					"varname" : "freq[2]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-73",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 343.991851999999994, 80.0, 89.0, 20.0 ],
					"text" : "Sample Speed"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-66",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 1288.0, 483.0, 333.0, 182.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-6",
									"maxclass" : "comment",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 238.666672000000005, 116.0, 48.0, 20.0 ],
									"text" : "Var ms"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "comment",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 82.0, 116.0, 75.0, 20.0 ],
									"text" : "Sample Pos"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-5",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 168.666672000000005, 149.0, 156.0, 22.0 ],
									"text" : "pattrforward parent::posVar",
									"varname" : "p_pVar"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-4",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 149.0, 138.0, 22.0 ],
									"text" : "pattrforward parent::pos",
									"varname" : "p_pos"
								}

							}
, 							{
								"box" : 								{
									"format" : 6,
									"id" : "obj-93",
									"maxclass" : "flonum",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 13.0, 116.0, 70.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-92",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 87.0, 102.0, 22.0 ],
									"text" : "expr ($f1 + $f2)/2"
								}

							}
, 							{
								"box" : 								{
									"format" : 6,
									"id" : "obj-38",
									"maxclass" : "flonum",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 168.666672000000005, 116.0, 70.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-12",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 168.666672000000005, 87.0, 31.0, 22.0 ],
									"text" : "!- 0."
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-23",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 13.0, 31.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-28",
									"index" : 2,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 180.666686999999996, 13.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-38", 0 ],
									"source" : [ "obj-12", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-12", 0 ],
									"order" : 0,
									"source" : [ "obj-23", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-92", 0 ],
									"order" : 1,
									"source" : [ "obj-23", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-12", 1 ],
									"order" : 0,
									"source" : [ "obj-28", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-92", 1 ],
									"order" : 1,
									"source" : [ "obj-28", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-5", 0 ],
									"source" : [ "obj-38", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-93", 0 ],
									"source" : [ "obj-92", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-4", 0 ],
									"source" : [ "obj-93", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 313.000030999999979, 571.5, 90.0, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p calc_position",
					"varname" : "calc_position"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-83",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 288.887145999999973, 99.0, 50.0, 22.0 ],
					"varname" : "posCurve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-85",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 288.887145999999973, 80.0, 46.0, 20.0 ],
					"text" : "Curve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-86",
					"maxclass" : "newobj",
					"numinlets" : 3,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 650.0, 477.0, 378.0, 352.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-23",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 95.0, 247.0, 83.0, 22.0 ],
									"text" : "send towform"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-16",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 94.5, 200.0, 74.0, 22.0 ],
									"text" : "prepend set"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-7",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 94.5, 171.0, 63.0, 22.0 ],
									"text" : "pack 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-22",
									"linecount" : 2,
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 194.0, 226.0, 77.0, 35.0 ],
									"text" : "translate ms samples"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-21",
									"linecount" : 2,
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 226.0, 77.0, 35.0 ],
									"text" : "translate ms samples"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-10",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "float", "int" ],
									"patching_rect" : [ 278.0, 68.0, 76.0, 22.0 ],
									"text" : "maximum 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-9",
									"linecount" : 2,
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 278.0, 295.0, 99.0, 35.0 ],
									"text" : "grain_params/poscurve $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-4",
									"index" : 3,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 278.0, 11.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 13.0, 322.0, 77.0, 22.0 ],
									"text" : "send tograin"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 194.0, 140.0, 31.0, 22.0 ],
									"text" : "+ 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 13.0, 140.0, 29.5, 22.0 ],
									"text" : "- 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-15",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 111.0, 57.0, 29.5, 22.0 ],
									"text" : "/ 2."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-37",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 90.0, 57.0, 22.0 ],
									"text" : "pak 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-44",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 194.0, 269.0, 144.0, 22.0 ],
									"text" : "grain_params/posmax $1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-46",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 285.0, 141.0, 22.0 ],
									"text" : "grain_params/posmin $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-48",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 11.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-49",
									"index" : 2,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 111.0, 11.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-9", 0 ],
									"source" : [ "obj-10", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 1 ],
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-23", 0 ],
									"source" : [ "obj-16", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-22", 0 ],
									"order" : 0,
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-7", 1 ],
									"order" : 1,
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"source" : [ "obj-21", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-44", 0 ],
									"source" : [ "obj-22", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-21", 0 ],
									"order" : 1,
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-7", 0 ],
									"order" : 0,
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"order" : 0,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"order" : 1,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-10", 0 ],
									"source" : [ "obj-4", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-44", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-46", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 0 ],
									"source" : [ "obj-48", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-15", 0 ],
									"source" : [ "obj-49", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-16", 0 ],
									"source" : [ "obj-7", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-9", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 162.887131000000011, 125.0, 145.000014999999991, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p pos"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-87",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 229.387131000000011, 80.0, 48.0, 20.0 ],
					"text" : "Var ms"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-88",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 225.887131000000011, 99.0, 60.0, 22.0 ],
					"varname" : "posVar"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-89",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 162.887131000000011, 99.0, 56.0, 22.0 ],
					"varname" : "pos"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-90",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 153.387131000000011, 80.0, 75.0, 20.0 ],
					"text" : "Sample Pos"
				}

			}
, 			{
				"box" : 				{
					"buffername" : "sample",
					"chanoffset" : 0,
					"id" : "obj-79",
					"maxclass" : "waveform~",
					"numinlets" : 5,
					"numoutlets" : 6,
					"outlettype" : [ "float", "float", "float", "float", "list", "" ],
					"patching_rect" : [ 215.000031000000007, 500.0, 264.0, 66.0 ],
					"setmode" : 1,
					"varname" : "wform"
				}

			}
, 			{
				"box" : 				{
					"autopopulate" : 1,
					"id" : "obj-62",
					"items" : [ "vs_abreak.aif", ",", "vs_abreak2.aif", ",", "vs_analog_loop.aif", ",", "vs_analog_loop2.wav", ",", "vs_aqua_sap.aif", ",", "vs_aqua_sap_nr.wav", ",", "vs_bgest.aif", ",", "vs_carbon_loop.aif", ",", "vs_carbon_loop2.wav", ",", "vs_drums_loop.aif", ",", "vs_flute_bourree.wav", ",", "vs_flute_q2.aif", ",", "vs_greg_1666.aif", ",", "vs_group_groove.wav", ",", "vs_group_groove_B.wav", ",", "vs_group_groove_fadeout.wav", ",", "vs_guitar_frag_q4.aif", ",", "vs_guitar_melody_q4.aif", ",", "vs_guitar_phrase_q4.aif", ",", "vs_guitar_rythm_q4.aif", ",", "vs_harp_riff.wav", ",", "vs_mik_akdrs3.wav", ",", "vs_mikr.aif", ",", "vs_organ_line.wav", ",", "vs_piano_loop.wav", ",", "vs_piano_tango.wav", ",", "vs_sicut_dixit.aif", ",", "vs_song_h_coleridge.wav", ",", "vs_walking_bass.wav" ],
					"maxclass" : "umenu",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "int", "", "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 216.761703000000011, 436.0, 168.829010000000011, 22.0 ],
					"prefix_mode" : 2
				}

			}
, 			{
				"box" : 				{
					"calccount" : 10,
					"id" : "obj-2",
					"maxclass" : "scope~",
					"numinlets" : 2,
					"numoutlets" : 0,
					"patching_rect" : [ 492.491821000000016, 500.0, 156.999968999999993, 66.0 ],
					"range" : [ 0.0, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"calccount" : 16,
					"fgcolor" : [ 0.831373, 0.94902, 0.858824, 1.0 ],
					"id" : "obj-84",
					"maxclass" : "scope~",
					"numinlets" : 2,
					"numoutlets" : 0,
					"patching_rect" : [ 492.491790999999978, 268.25, 157.0, 162.5 ],
					"trigger" : 1
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-76",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 148.721008000000012, 436.0, 42.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-74",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 99.325951000000003, 436.0, 42.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-48",
					"maxclass" : "newobj",
					"numinlets" : 3,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 4.554336, 471.0, 174.0, 22.0 ],
					"text" : "pak s 0. 0."
				}

			}
, 			{
				"box" : 				{
					"fgcolor" : [ 0.831373, 0.94902, 0.858824, 1.0 ],
					"id" : "obj-25",
					"maxclass" : "spectroscope~",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 216.761703000000011, 338.75, 264.0, 92.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-18",
					"items" : [ "hanning", ",", "gauss", ",", "quasigauss", ",", "triangle", ",", "trapezoid", ",", "expodec", ",", "rexpodec", ",", "sinc", ",", "blackman", ",", "welch" ],
					"maxclass" : "umenu",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "int", "", "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 4.554336, 436.0, 86.333343999999997, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-4",
					"linecount" : 2,
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 4.554336, 506.0, 68.0, 35.0 ],
					"text" : "vs.winfunc win2 4096"
				}

			}
, 			{
				"box" : 				{
					"buffername" : "win2",
					"id" : "obj-1",
					"labels" : 0,
					"maxclass" : "waveform~",
					"numinlets" : 5,
					"numoutlets" : 6,
					"outlettype" : [ "float", "float", "float", "float", "list", "" ],
					"patching_rect" : [ 79.221007999999998, 500.0, 132.552764999999994, 75.5 ],
					"ruler" : 0,
					"selectioncolor" : [ 0.815686, 0.858824, 0.34902, 0.0 ],
					"style" : "default",
					"voffset" : 1.0,
					"vzoom" : 0.5,
					"waveformcolor" : [ 0.831373, 0.94902, 0.858824, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-57",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 490.491790999999978, 176.5, 50.0, 22.0 ],
					"varname" : "revCurve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-58",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 489.491790999999978, 159.5, 46.0, 20.0 ],
					"text" : "Curve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-59",
					"maxclass" : "newobj",
					"numinlets" : 3,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 570.0, 153.0, 371.0, 308.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-10",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "float", "int" ],
									"patching_rect" : [ 250.0, 68.0, 76.0, 22.0 ],
									"text" : "maximum 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-9",
									"linecount" : 2,
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 250.0, 250.0, 119.0, 35.0 ],
									"text" : "grain_params/revcurve $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-4",
									"index" : 3,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 250.0, 11.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 13.0, 269.0, 77.0, 22.0 ],
									"text" : "send tograin"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 138.0, 164.0, 114.0, 22.0 ],
									"text" : "expr $f1 + ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 164.0, 111.0, 22.0 ],
									"text" : "expr $f1 - ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-15",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 111.0, 57.0, 41.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-37",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 114.0, 57.0, 22.0 ],
									"text" : "pak 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-44",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 138.0, 222.5, 141.0, 22.0 ],
									"text" : "grain_params/revmax $1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-46",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 196.0, 138.0, 22.0 ],
									"text" : "grain_params/revmin $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-48",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 11.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-49",
									"index" : 2,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 111.0, 11.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-9", 0 ],
									"source" : [ "obj-10", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 1 ],
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-44", 0 ],
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"order" : 0,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"order" : 1,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-10", 0 ],
									"source" : [ "obj-4", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-44", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-46", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 0 ],
									"source" : [ "obj-48", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-15", 0 ],
									"source" : [ "obj-49", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-9", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 360.491790999999978, 202.5, 149.0, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p rev"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-60",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 424.491790999999978, 159.5, 43.0, 20.0 ],
					"text" : "Var %"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-61",
					"maxclass" : "flonum",
					"maximum" : 100.0,
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 425.491790999999978, 176.5, 50.0, 22.0 ],
					"varname" : "revVar"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-63",
					"maxclass" : "flonum",
					"maximum" : 1.0,
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 360.491790999999978, 176.5, 50.0, 22.0 ],
					"varname" : "rev"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-64",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 360.491790999999978, 157.5, 49.0, 20.0 ],
					"text" : "Reverb"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-55",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 292.158630000000016, 24.0, 50.0, 22.0 ],
					"varname" : "dutyCurve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-56",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 292.158630000000016, 5.0, 46.0, 20.0 ],
					"text" : "Curve"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-53",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 292.887145999999973, 176.5, 50.0, 22.0 ],
					"varname" : "ampCurve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-54",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 292.887145999999973, 157.5, 46.0, 20.0 ],
					"text" : "Curve"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-49",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 486.491790999999978, 24.0, 50.0, 22.0 ],
					"varname" : "freqCurve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-52",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 486.491790999999978, 5.0, 46.0, 20.0 ],
					"text" : "Curve"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-30",
					"lastchannelcount" : 0,
					"maxclass" : "live.gain~",
					"numinlets" : 2,
					"numoutlets" : 5,
					"orientation" : 1,
					"outlettype" : [ "signal", "signal", "", "float", "list" ],
					"parameter_enable" : 1,
					"patching_rect" : [ 83.497390999999993, 356.25, 124.0, 47.0 ],
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_initial" : [ -96 ],
							"parameter_initial_enable" : 1,
							"parameter_longname" : "live.gain~",
							"parameter_mmax" : 6.0,
							"parameter_mmin" : -70.0,
							"parameter_modmode" : 0,
							"parameter_shortname" : "live.gain~",
							"parameter_type" : 0,
							"parameter_unitstyle" : 4
						}

					}
,
					"varname" : "live.gain~"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-5",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 26.5, 344.0, 33.0, 22.0 ],
					"text" : "stop"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-31",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 6.0, 316.0, 74.0, 22.0 ],
					"text" : "startwindow"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-32",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 0,
					"patching_rect" : [ 6.0, 395.0, 37.0, 22.0 ],
					"text" : "dac~"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-24",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 907.0, 140.0, 373.0, 257.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 13.0, 121.0, 38.0, 22.0 ],
									"text" : "!- 0.5"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 138.0, 121.0, 38.0, 22.0 ],
									"text" : "+ 0.5"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 13.0, 207.0, 77.0, 22.0 ],
									"text" : "send tograin"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-15",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 111.0, 57.0, 41.0, 22.0 ],
									"text" : "/ 200."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-44",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 138.0, 180.0, 145.0, 22.0 ],
									"text" : "grain_params/panmax $1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-46",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 149.0, 141.0, 22.0 ],
									"text" : "grain_params/panmin $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-49",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 111.0, 11.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"order" : 0,
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"order" : 1,
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-44", 0 ],
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-44", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-46", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-15", 0 ],
									"source" : [ "obj-49", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 334.033051, 283.5, 80.5, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p pan"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-26",
					"maxclass" : "flonum",
					"maximum" : 100.0,
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 334.033051, 257.5, 50.0, 22.0 ],
					"varname" : "panWifth"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-29",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 326.533051, 240.5, 63.0, 20.0 ],
					"text" : "PanWidth"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-37",
					"maxclass" : "newobj",
					"numinlets" : 3,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 59.0, 104.0, 355.0, 302.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-10",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "float", "int" ],
									"patching_rect" : [ 250.0, 68.0, 76.0, 22.0 ],
									"text" : "maximum 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-9",
									"linecount" : 2,
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 250.0, 252.0, 102.0, 35.0 ],
									"text" : "grain_params/ampcurve $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-4",
									"index" : 3,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 250.0, 11.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 13.0, 269.0, 77.0, 22.0 ],
									"text" : "send tograin"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 138.0, 164.0, 114.0, 22.0 ],
									"text" : "expr $f1 + ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 164.0, 111.0, 22.0 ],
									"text" : "expr $f1 - ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-15",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 111.0, 57.0, 41.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-37",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 114.0, 57.0, 22.0 ],
									"text" : "pak 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-44",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 138.0, 222.5, 148.0, 22.0 ],
									"text" : "grain_params/ampmax $1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-46",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 194.0, 145.0, 22.0 ],
									"text" : "grain_params/ampmin $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-48",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 11.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-49",
									"index" : 2,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 111.0, 11.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-9", 0 ],
									"source" : [ "obj-10", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 1 ],
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-44", 0 ],
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"order" : 0,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"order" : 1,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-10", 0 ],
									"source" : [ "obj-4", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-44", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-46", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 0 ],
									"source" : [ "obj-48", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-15", 0 ],
									"source" : [ "obj-49", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-9", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 162.887131000000011, 202.5, 164.0, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p amp"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-43",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 235.387131000000011, 157.5, 43.0, 20.0 ],
					"text" : "Var %"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-44",
					"maxclass" : "flonum",
					"maximum" : 100.0,
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 235.387131000000011, 176.5, 50.0, 22.0 ],
					"varname" : "ampVar"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-46",
					"maxclass" : "flonum",
					"maximum" : 1.0,
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 162.887131000000011, 176.5, 50.0, 22.0 ],
					"varname" : "amp"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-20",
					"maxclass" : "newobj",
					"numinlets" : 4,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 134.0, 171.0, 504.0, 456.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-5",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 15.0, 87.0, 140.0, 22.0 ],
									"text" : "grain_params/density $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-6",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 15.0, 10.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-20",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 332.0, 275.5, 149.0, 22.0 ],
									"text" : "grain_params/durcurve $1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-14",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 220.0, 232.0, 31.0, 22.0 ],
									"text" : "!/ 1."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-16",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "float", "int" ],
									"patching_rect" : [ 220.0, 207.0, 96.0, 22.0 ],
									"text" : "maximum 0.001"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-13",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 95.0, 232.0, 31.0, 22.0 ],
									"text" : "!/ 1."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-7",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "float", "int" ],
									"patching_rect" : [ 95.0, 207.0, 96.0, 22.0 ],
									"text" : "maximum 0.001"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-1",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 95.0, 49.0, 47.0, 22.0 ],
									"text" : "/ 1000."
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-4",
									"index" : 4,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 332.0, 10.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 95.0, 370.0, 77.0, 22.0 ],
									"text" : "send tograin"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 220.0, 176.0, 114.0, 22.0 ],
									"text" : "expr $f1 + ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 95.0, 176.0, 111.0, 22.0 ],
									"text" : "expr $f1 - ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-15",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 193.0, 56.0, 41.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-37",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 95.0, 133.0, 57.0, 22.0 ],
									"text" : "pak 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-44",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 220.0, 303.0, 142.0, 22.0 ],
									"text" : "grain_params/durmax $1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-46",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 95.0, 275.5, 139.0, 22.0 ],
									"text" : "grain_params/durmin $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-48",
									"index" : 2,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 95.0, 10.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-49",
									"index" : 3,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 193.0, 10.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 0 ],
									"source" : [ "obj-1", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"source" : [ "obj-13", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-44", 0 ],
									"source" : [ "obj-14", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 1 ],
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-14", 0 ],
									"source" : [ "obj-16", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-16", 0 ],
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-20", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-7", 0 ],
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"order" : 0,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"order" : 1,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-20", 0 ],
									"source" : [ "obj-4", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-44", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-46", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-1", 0 ],
									"source" : [ "obj-48", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-15", 0 ],
									"source" : [ "obj-49", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-5", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-5", 0 ],
									"source" : [ "obj-6", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-13", 0 ],
									"source" : [ "obj-7", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 83.887268000000006, 50.0, 227.271362000000011, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p density_dur"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-21",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 229.734833000000009, 5.0, 43.0, 20.0 ],
					"text" : "Var %"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-22",
					"maxclass" : "flonum",
					"maximum" : 100.0,
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 222.734833000000009, 24.0, 50.0, 22.0 ],
					"varname" : "dutyVar"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-36",
					"maxclass" : "flonum",
					"maximum" : 8000.0,
					"minimum" : 0.001,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 153.311066000000011, 24.0, 50.0, 22.0 ],
					"varname" : "duty"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-3",
					"maxclass" : "newobj",
					"numinlets" : 3,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 8,
							"minor" : 6,
							"revision" : 2,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 214.0, 262.0, 352.0, 297.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 1,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 1,
						"objectsnaponopen" : 1,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"lefttoolbarpinned" : 0,
						"toptoolbarpinned" : 0,
						"righttoolbarpinned" : 0,
						"bottomtoolbarpinned" : 0,
						"toolbars_unpinned_last_save" : 0,
						"tallnewobj" : 0,
						"boxanimatetime" : 200,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"style" : "",
						"subpatcher_template" : "",
						"assistshowspatchername" : 0,
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-10",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "float", "int" ],
									"patching_rect" : [ 246.0, 63.0, 76.0, 22.0 ],
									"text" : "maximum 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-9",
									"linecount" : 2,
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 246.0, 245.0, 106.0, 35.0 ],
									"text" : "grain_params/freqcurve $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-4",
									"index" : 3,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 246.0, 6.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 9.0, 264.0, 77.0, 22.0 ],
									"text" : "send tograin"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 134.0, 159.0, 114.0, 22.0 ],
									"text" : "expr $f1 + ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 9.0, 159.0, 111.0, 22.0 ],
									"text" : "expr $f1 - ($f1*$f2)"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-15",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 107.0, 52.0, 41.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-37",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 9.0, 109.0, 57.0, 22.0 ],
									"text" : "pak 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-44",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 134.0, 217.5, 145.0, 22.0 ],
									"text" : "grain_params/freqmax $1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-46",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 9.0, 190.0, 142.0, 22.0 ],
									"text" : "grain_params/freqmin $1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-48",
									"index" : 1,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 9.0, 6.0, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-49",
									"index" : 2,
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 107.0, 6.0, 30.0, 30.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-9", 0 ],
									"source" : [ "obj-10", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 1 ],
									"source" : [ "obj-15", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-44", 0 ],
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"order" : 0,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"order" : 1,
									"source" : [ "obj-37", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-10", 0 ],
									"source" : [ "obj-4", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-44", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-46", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 0 ],
									"source" : [ "obj-48", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-15", 0 ],
									"source" : [ "obj-49", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"source" : [ "obj-9", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 354.158539000000019, 50.0, 151.333251999999987, 22.0 ],
					"saved_object_attributes" : 					{
						"description" : "",
						"digest" : "",
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p freq"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-9",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 423.825165000000027, 5.0, 43.0, 20.0 ],
					"text" : "Var %"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-17",
					"maxclass" : "flonum",
					"maximum" : 100.0,
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 420.325165000000027, 24.0, 50.0, 22.0 ],
					"varname" : "freqVar"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-19",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 354.158539000000019, 24.0, 56.0, 22.0 ],
					"varname" : "freq"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-35",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 354.158539000000019, 5.0, 60.0, 20.0 ],
					"text" : "Osc Freq"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-47",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 23.0, 158.5, 55.0, 22.0 ],
					"text" : "r tograin"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-41",
					"maxclass" : "flonum",
					"minimum" : 0.0,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 83.887268000000006, 24.0, 58.0, 22.0 ],
					"varname" : "rate"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-42",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 78.887268000000006, 5.0, 71.0, 20.0 ],
					"text" : "Grain Dens"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-11",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 153.311066000000011, 5.0, 56.0, 20.0 ],
					"text" : "Duration"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-10",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 154.387191999999999, 157.5, 67.0, 20.0 ],
					"text" : "Amplitude"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-13",
					"maxclass" : "preset",
					"numinlets" : 1,
					"numoutlets" : 5,
					"outlettype" : [ "preset", "int", "preset", "int", "" ],
					"patching_rect" : [ 6.0, 9.0, 70.887268000000006, 76.0 ],
					"preset_data" : [ 						{
							"number" : 1,
							"data" : [ 5, "obj-41", "flonum", "float", 20.0, 5, "obj-19", "flonum", "float", 5000.0, 5, "obj-17", "flonum", "float", 94.0, 5, "obj-36", "flonum", "float", 100.0, 5, "obj-22", "flonum", "float", 99.0, 5, "obj-46", "flonum", "float", 0.359, 5, "obj-44", "flonum", "float", 52.0, 5, "obj-26", "flonum", "float", 50.0, 5, "obj-49", "flonum", "float", 0.321, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.028, 5, "obj-63", "flonum", "float", 0.095, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 8.9, 5, "<invalid>", "flonum", "float", 0.995, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 5, 5, "obj-74", "flonum", "float", 1.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 0, 5, "obj-89", "flonum", "float", 249.671203999999989, 5, "obj-88", "flonum", "float", 62.426307999999999, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.0, 5, "obj-71", "flonum", "float", 0.0, 5, "obj-67", "flonum", "float", 0.0 ]
						}
, 						{
							"number" : 2,
							"data" : [ 5, "obj-41", "flonum", "float", 84.0, 5, "obj-19", "flonum", "float", 71.0, 5, "obj-17", "flonum", "float", 15.0, 5, "obj-36", "flonum", "float", 256.0, 5, "obj-22", "flonum", "float", 99.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 0.0, 5, "obj-26", "flonum", "float", 78.0, 5, "obj-49", "flonum", "float", 6.8, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.028, 5, "obj-63", "flonum", "float", 0.081, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 8.9, 5, "<invalid>", "flonum", "float", 0.886, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 1, 5, "obj-74", "flonum", "float", 2.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 0, 5, "obj-89", "flonum", "float", 983.129272000000014, 5, "obj-88", "flonum", "float", 31.201815, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 0.1, 5, "obj-71", "flonum", "float", 8.0, 5, "obj-67", "flonum", "float", 1.0 ]
						}
, 						{
							"number" : 3,
							"data" : [ 5, "obj-41", "flonum", "float", 76.0, 5, "obj-19", "flonum", "float", 734.0, 5, "obj-17", "flonum", "float", 34.0, 5, "obj-36", "flonum", "float", 304.0, 5, "obj-22", "flonum", "float", 100.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 100.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 0.15, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.063, 5, "obj-63", "flonum", "float", 0.082, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 1.0, 5, "<invalid>", "flonum", "float", 0.944, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 6, 5, "obj-74", "flonum", "float", 6.07, 5, "obj-76", "flonum", "float", 3.2, 5, "obj-62", "umenu", "int", 0, 5, "obj-89", "flonum", "float", 428.594115999999985, 5, "obj-88", "flonum", "float", 0.0, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 0.5, 5, "obj-71", "flonum", "float", 16.799999, 5, "obj-67", "flonum", "float", 1.0 ]
						}
, 						{
							"number" : 4,
							"data" : [ 5, "obj-41", "flonum", "float", 2000.0, 5, "obj-19", "flonum", "float", 10000.0, 5, "obj-17", "flonum", "float", 99.900002000000001, 5, "obj-36", "flonum", "float", 20.0, 5, "obj-22", "flonum", "float", 80.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 99.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 8.0, 5, "obj-53", "flonum", "float", 11.0, 5, "obj-55", "flonum", "float", 12.0, 5, "obj-63", "flonum", "float", 0.22, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 10.0, 5, "<invalid>", "flonum", "float", 0.911, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 1, 5, "obj-74", "flonum", "float", 0.5, 5, "obj-76", "flonum", "float", 3.4, 5, "obj-62", "umenu", "int", 21, 5, "obj-89", "flonum", "float", 12495.488280999999915, 5, "obj-88", "flonum", "float", 11264.0, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 10.0, 5, "obj-71", "flonum", "float", 99.0, 5, "obj-67", "flonum", "float", 26.0, 5, "obj-15", "number~", "list", 0.0 ]
						}
, 						{
							"number" : 5,
							"data" : [ 5, "obj-41", "flonum", "float", 427.0, 5, "obj-19", "flonum", "float", 100.0, 5, "obj-17", "flonum", "float", 29.0, 5, "obj-36", "flonum", "float", 100.0, 5, "obj-22", "flonum", "float", 98.0, 5, "obj-46", "flonum", "float", 0.722, 5, "obj-44", "flonum", "float", 23.0, 5, "obj-26", "flonum", "float", 80.0, 5, "obj-49", "flonum", "float", 1.0, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.33, 5, "obj-63", "flonum", "float", 0.068, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 8.9, 5, "<invalid>", "flonum", "float", 0.995, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 8, 5, "obj-74", "flonum", "float", 1.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 20, 5, "obj-89", "flonum", "float", 3086.12255899999991, 5, "obj-88", "flonum", "float", 539.319762999999966, 5, "obj-83", "flonum", "float", 1.51, 5, "obj-72", "flonum", "float", 0.5, 5, "obj-71", "flonum", "float", 99.0, 5, "obj-67", "flonum", "float", 1.0 ]
						}
, 						{
							"number" : 6,
							"data" : [ 5, "obj-41", "flonum", "float", 10.0, 5, "obj-19", "flonum", "float", 50.0, 5, "obj-17", "flonum", "float", 60.0, 5, "obj-36", "flonum", "float", 278.0, 5, "obj-22", "flonum", "float", 99.0, 5, "obj-46", "flonum", "float", 0.68, 5, "obj-44", "flonum", "float", 23.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 6.8, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.028, 5, "obj-63", "flonum", "float", 0.095, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 8.9, 5, "<invalid>", "flonum", "float", 0.995, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 1, 5, "obj-74", "flonum", "float", 1.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 27, 5, "obj-89", "flonum", "float", 616.0, 5, "obj-88", "flonum", "float", 0.0, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.0, 5, "obj-71", "flonum", "float", 0.0, 5, "obj-67", "flonum", "float", 0.0 ]
						}
, 						{
							"number" : 7,
							"data" : [ 5, "obj-41", "flonum", "float", 33.0, 5, "obj-19", "flonum", "float", 50.0, 5, "obj-17", "flonum", "float", 0.0, 5, "obj-36", "flonum", "float", 1000.0, 5, "obj-22", "flonum", "float", 98.0, 5, "obj-46", "flonum", "float", 0.68, 5, "obj-44", "flonum", "float", 23.0, 5, "obj-26", "flonum", "float", 50.0, 5, "obj-49", "flonum", "float", 0.148, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.33, 5, "obj-63", "flonum", "float", 0.068, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 8.9, 5, "<invalid>", "flonum", "float", 0.995, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 0, 5, "obj-74", "flonum", "float", 1.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 27, 5, "obj-89", "flonum", "float", 21186.996093999998266, 5, "obj-88", "flonum", "float", 4.501595, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.0, 5, "obj-71", "flonum", "float", 0.0, 5, "obj-67", "flonum", "float", 1.0 ]
						}
, 						{
							"number" : 8,
							"data" : [ 5, "obj-41", "flonum", "float", 600.0, 5, "obj-19", "flonum", "float", 54.0, 5, "obj-17", "flonum", "float", 1.0, 5, "obj-36", "flonum", "float", 115.0, 5, "obj-22", "flonum", "float", 95.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 0.0, 5, "obj-26", "flonum", "float", 78.0, 5, "obj-49", "flonum", "float", 2.4, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 1.0, 5, "obj-63", "flonum", "float", 0.07, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 3.0, 5, "<invalid>", "flonum", "float", 0.997, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 2, 5, "obj-74", "flonum", "float", 80.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 22, 5, "obj-89", "flonum", "float", 13071.145507999999609, 5, "obj-88", "flonum", "float", 374.535155999999972, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 0.6, 5, "obj-71", "flonum", "float", 69.0, 5, "obj-67", "flonum", "float", 1.0, 5, "obj-15", "number~", "list", 0.0 ]
						}
, 						{
							"number" : 9,
							"data" : [ 5, "obj-41", "flonum", "float", 600.0, 5, "obj-19", "flonum", "float", 34.0, 5, "obj-17", "flonum", "float", 96.0, 5, "obj-36", "flonum", "float", 835.0, 5, "obj-22", "flonum", "float", 99.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 0.0, 5, "obj-26", "flonum", "float", 78.0, 5, "obj-49", "flonum", "float", 1.0, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 2.82, 5, "obj-63", "flonum", "float", 0.07, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 3.0, 5, "<invalid>", "flonum", "float", 0.6, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 8, 5, "obj-74", "flonum", "float", 12.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 22, 5, "obj-89", "flonum", "float", 7662.0, 5, "obj-88", "flonum", "float", 0.0, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 0.24, 5, "obj-71", "flonum", "float", 69.0, 5, "obj-67", "flonum", "float", 1.0, 5, "obj-15", "number~", "list", 0.0 ]
						}
, 						{
							"number" : 10,
							"data" : [ 5, "obj-41", "flonum", "float", 20.0, 5, "obj-19", "flonum", "float", 5000.0, 5, "obj-17", "flonum", "float", 100.0, 5, "obj-36", "flonum", "float", 8000.0, 5, "obj-22", "flonum", "float", 50.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 100.0, 5, "obj-26", "flonum", "float", 78.0, 5, "obj-49", "flonum", "float", 1.0, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.42, 5, "obj-63", "flonum", "float", 0.48, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 1.0, 5, "<invalid>", "flonum", "float", 0.98, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 7, 5, "obj-74", "flonum", "float", 33.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 4, 5, "obj-89", "flonum", "float", 4434.387695000000349, 5, "obj-88", "flonum", "float", 4554.399414000000434, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 0.87, 5, "obj-71", "flonum", "float", 69.0, 5, "obj-67", "flonum", "float", 1.0, 5, "obj-15", "number~", "list", 0.0 ]
						}
, 						{
							"number" : 11,
							"data" : [ 5, "obj-41", "flonum", "float", 29.0, 5, "obj-19", "flonum", "float", 40.0, 5, "obj-17", "flonum", "float", 0.58, 5, "obj-36", "flonum", "float", 500.0, 5, "obj-22", "flonum", "float", 50.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 40.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 1.0, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 1.0, 5, "obj-63", "flonum", "float", 0.1, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 1.0, 5, "<invalid>", "flonum", "float", 0.41, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 4, 5, "obj-74", "flonum", "float", 74.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 20, 5, "obj-89", "flonum", "float", 2906.349365000000034, 5, "obj-88", "flonum", "float", 239.727904999999993, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 0.5, 5, "obj-71", "flonum", "float", 69.0, 5, "obj-67", "flonum", "float", 1.0 ]
						}
, 						{
							"number" : 12,
							"data" : [ 5, "obj-41", "flonum", "float", 23.0, 5, "obj-19", "flonum", "float", 50.0, 5, "obj-17", "flonum", "float", 1.0, 5, "obj-36", "flonum", "float", 232.0, 5, "obj-22", "flonum", "float", 80.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 80.0, 5, "obj-26", "flonum", "float", 78.0, 5, "obj-49", "flonum", "float", 2.4, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 1.0, 5, "obj-63", "flonum", "float", 0.07, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 3.0, 5, "<invalid>", "flonum", "float", 0.71, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 4, 5, "obj-74", "flonum", "float", 80.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 22, 5, "obj-89", "flonum", "float", 5168.503418000000238, 5, "obj-88", "flonum", "float", 449.478484999999978, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.0, 5, "obj-71", "flonum", "float", 69.0, 5, "obj-67", "flonum", "float", 1.0 ]
						}
, 						{
							"number" : 13,
							"data" : [ 5, "obj-41", "flonum", "float", 171.0, 5, "obj-19", "flonum", "float", 880.0, 5, "obj-17", "flonum", "float", 100.0, 5, "obj-36", "flonum", "float", 6.0, 5, "obj-22", "flonum", "float", 100.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 100.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 1.0, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 26.0, 5, "obj-63", "flonum", "float", 1.0, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 93.0, 5, "<invalid>", "flonum", "float", 0.999, 5, "<invalid>", "flonum", "float", 0.76, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 4, 5, "obj-74", "flonum", "float", 76.0, 5, "obj-76", "flonum", "float", 1.0, 5, "obj-62", "umenu", "int", 22, 5, "obj-89", "flonum", "float", 4082.301758000000063, 5, "obj-88", "flonum", "float", 2621.88207999999986, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.0, 5, "obj-71", "flonum", "float", 69.0, 5, "obj-67", "flonum", "float", 1.0 ]
						}
, 						{
							"number" : 14,
							"data" : [ 5, "obj-41", "flonum", "float", 100.0, 5, "obj-19", "flonum", "float", 424.0, 5, "obj-17", "flonum", "float", 14.0, 5, "obj-36", "flonum", "float", 1000.0, 5, "obj-22", "flonum", "float", 95.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 100.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 2.4, 5, "obj-53", "flonum", "float", 10.0, 5, "obj-55", "flonum", "float", 1.0, 5, "obj-63", "flonum", "float", 0.07, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 3.0, 5, "<invalid>", "flonum", "float", 0.967, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 1, 5, "obj-74", "flonum", "float", 80.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 21, 5, "obj-89", "flonum", "float", 21502.449218999998266, 5, "obj-88", "flonum", "float", 29843.583984000000783, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 9.0, 5, "obj-71", "flonum", "float", 99.0, 5, "obj-67", "flonum", "float", 6.1, 5, "obj-15", "number~", "list", 0.0 ]
						}
, 						{
							"number" : 15,
							"data" : [ 5, "obj-41", "flonum", "float", 20.0, 5, "obj-19", "flonum", "float", 592.0, 5, "obj-17", "flonum", "float", 90.0, 5, "obj-36", "flonum", "float", 2510.0, 5, "obj-22", "flonum", "float", 99.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 100.0, 5, "obj-26", "flonum", "float", 50.0, 5, "obj-49", "flonum", "float", 8.6, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.609, 5, "obj-63", "flonum", "float", 0.082, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 1.0, 5, "<invalid>", "flonum", "float", 0.845, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 5, 5, "obj-74", "flonum", "float", 1.56, 5, "obj-76", "flonum", "float", 2.53, 5, "obj-62", "umenu", "int", 0, 5, "obj-89", "flonum", "float", 983.0, 5, "obj-88", "flonum", "float", 89.0, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 0.2, 5, "obj-71", "flonum", "float", 16.799999, 5, "obj-67", "flonum", "float", 1.0 ]
						}
, 						{
							"number" : 16,
							"data" : [ 5, "obj-41", "flonum", "float", 40.0, 5, "obj-19", "flonum", "float", 80.0, 5, "obj-17", "flonum", "float", 90.0, 5, "obj-36", "flonum", "float", 8000.0, 5, "obj-22", "flonum", "float", 99.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 0.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 3.0, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.4, 5, "obj-63", "flonum", "float", 0.082, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 1.0, 5, "<invalid>", "flonum", "float", 0.939, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 7, 5, "obj-74", "flonum", "float", 100.0, 5, "obj-76", "flonum", "float", 2.53, 5, "obj-62", "umenu", "int", 0, 5, "obj-89", "flonum", "float", 1142.154174999999896, 5, "obj-88", "flonum", "float", 424.761932000000002, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 10.0, 5, "obj-71", "flonum", "float", 99.0, 5, "obj-67", "flonum", "float", 4.0 ]
						}
, 						{
							"number" : 17,
							"data" : [ 5, "obj-41", "flonum", "float", 1000.0, 5, "obj-19", "flonum", "float", 10743.0, 5, "obj-17", "flonum", "float", 99.900002000000001, 5, "obj-36", "flonum", "float", 389.0, 5, "obj-22", "flonum", "float", 99.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 97.0, 5, "obj-26", "flonum", "float", 26.0, 5, "obj-49", "flonum", "float", 143.0, 5, "obj-53", "flonum", "float", 2.0, 5, "obj-55", "flonum", "float", 70.0, 5, "obj-63", "flonum", "float", 0.082, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 1.0, 5, "<invalid>", "flonum", "float", 0.939, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 1, 5, "obj-74", "flonum", "float", 100.0, 5, "obj-76", "flonum", "float", 2.53, 5, "obj-62", "umenu", "int", 6, 5, "obj-89", "flonum", "float", 686.405944999999974, 5, "obj-88", "flonum", "float", 1263.650879000000032, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 10.0, 5, "obj-71", "flonum", "float", 99.0, 5, "obj-67", "flonum", "float", 11.0 ]
						}
, 						{
							"number" : 18,
							"data" : [ 5, "obj-41", "flonum", "float", 700.0, 5, "obj-19", "flonum", "float", 10500.0, 5, "obj-17", "flonum", "float", 30.0, 5, "obj-36", "flonum", "float", 1459.0, 5, "obj-22", "flonum", "float", 99.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 100.0, 5, "obj-26", "flonum", "float", 26.0, 5, "obj-49", "flonum", "float", 29.0, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 70.0, 5, "obj-63", "flonum", "float", 0.097, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 1.0, 5, "<invalid>", "flonum", "float", 0.939, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 3, 5, "obj-74", "flonum", "float", 14.0, 5, "obj-76", "flonum", "float", 2.53, 5, "obj-62", "umenu", "int", 4, 5, "obj-89", "flonum", "float", 19415.703125, 5, "obj-88", "flonum", "float", 1917.6191409999999, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 10.0, 5, "obj-71", "flonum", "float", 99.0, 5, "obj-67", "flonum", "float", 11.0, 5, "obj-15", "number~", "list", 0.0 ]
						}
, 						{
							"number" : 19,
							"data" : [ 5, "obj-41", "flonum", "float", 5.0, 5, "obj-19", "flonum", "float", 5000.0, 5, "obj-17", "flonum", "float", 99.0, 5, "obj-36", "flonum", "float", 1459.0, 5, "obj-22", "flonum", "float", 18.0, 5, "obj-46", "flonum", "float", 0.2, 5, "obj-44", "flonum", "float", 100.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 29.0, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 70.0, 5, "obj-63", "flonum", "float", 0.642, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 10.0, 5, "<invalid>", "flonum", "float", 0.999, 5, "<invalid>", "flonum", "float", 0.2, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 6, 5, "obj-74", "flonum", "float", 1.0, 5, "obj-76", "flonum", "float", 3.4, 5, "obj-62", "umenu", "int", 10, 5, "obj-89", "flonum", "float", 12495.488280999999915, 5, "obj-88", "flonum", "float", 15831.292969000000085, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.0, 5, "obj-71", "flonum", "float", 99.0, 5, "obj-67", "flonum", "float", 11.0 ]
						}
, 						{
							"number" : 20,
							"data" : [ 5, "obj-41", "flonum", "float", 20000.0, 5, "obj-19", "flonum", "float", 1481.0, 5, "obj-17", "flonum", "float", 99.400002000000001, 5, "obj-36", "flonum", "float", 0.1, 5, "obj-22", "flonum", "float", 96.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 29.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 2.4, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 2.0, 5, "obj-63", "flonum", "float", 0.05, 5, "obj-61", "flonum", "float", 100.0, 5, "obj-57", "flonum", "float", 3.0, 5, "<invalid>", "flonum", "float", 0.991, 5, "<invalid>", "flonum", "float", 0.76, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 2, 5, "obj-74", "flonum", "float", 80.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 22, 5, "obj-89", "flonum", "float", 8637.0, 5, "obj-88", "flonum", "float", 374.535155999999972, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.7, 5, "obj-71", "flonum", "float", 69.0, 5, "obj-67", "flonum", "float", 1.0, 5, "obj-15", "number~", "list", 0.0 ]
						}
, 						{
							"number" : 21,
							"data" : [ 5, "obj-41", "flonum", "float", 2.0, 5, "obj-19", "flonum", "float", 1.0, 5, "obj-17", "flonum", "float", 0.0, 5, "obj-36", "flonum", "float", 1000.0, 5, "obj-22", "flonum", "float", 0.0, 5, "obj-46", "flonum", "float", 0.680000007152557, 5, "obj-44", "flonum", "float", 0.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 6.800000190734863, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.028000000864267, 5, "obj-63", "flonum", "float", 0.0, 5, "obj-61", "flonum", "float", 0.0, 5, "obj-57", "flonum", "float", 8.899999618530273, 5, "<invalid>", "flonum", "float", 0.0, 5, "<invalid>", "flonum", "float", 0.200000002980232, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 1, 5, "obj-74", "flonum", "float", 1.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 27, 5, "obj-89", "flonum", "float", 728.0, 5, "obj-88", "flonum", "float", 0.0, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.0, 5, "obj-71", "flonum", "float", 0.0, 5, "obj-67", "flonum", "float", 0.0, 6, "obj-15", "number~", "list", 0.0, 0.0 ]
						}
, 						{
							"number" : 22,
							"data" : [ 5, "obj-41", "flonum", "float", 100.0, 5, "obj-19", "flonum", "float", 5.0, 5, "obj-17", "flonum", "float", 60.0, 5, "obj-36", "flonum", "float", 1000.0, 5, "obj-22", "flonum", "float", 0.0, 5, "obj-46", "flonum", "float", 0.680000007152557, 5, "obj-44", "flonum", "float", 0.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 6.800000190734863, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.028000000864267, 5, "obj-63", "flonum", "float", 0.0, 5, "obj-61", "flonum", "float", 0.0, 5, "obj-57", "flonum", "float", 8.899999618530273, 5, "<invalid>", "flonum", "float", 0.0, 5, "<invalid>", "flonum", "float", 0.200000002980232, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 1, 5, "obj-74", "flonum", "float", 1.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 27, 5, "obj-89", "flonum", "float", 728.0, 5, "obj-88", "flonum", "float", 0.0, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.0, 5, "obj-71", "flonum", "float", 0.0, 5, "obj-67", "flonum", "float", 0.0, 6, "obj-15", "number~", "list", 0.0, 0.0 ]
						}
, 						{
							"number" : 23,
							"data" : [ 5, "obj-41", "flonum", "float", 20.0, 5, "obj-19", "flonum", "float", 0.25, 5, "obj-17", "flonum", "float", 50.0, 5, "obj-36", "flonum", "float", 200.0, 5, "obj-22", "flonum", "float", 10.0, 5, "obj-46", "flonum", "float", 1.0, 5, "obj-44", "flonum", "float", 20.0, 5, "obj-26", "flonum", "float", 100.0, 5, "obj-49", "flonum", "float", 0.5, 5, "obj-53", "flonum", "float", 1.0, 5, "obj-55", "flonum", "float", 0.028000000864267, 5, "obj-63", "flonum", "float", 0.0, 5, "obj-61", "flonum", "float", 0.0, 5, "obj-57", "flonum", "float", 8.899999618530273, 5, "<invalid>", "flonum", "float", 0.0, 5, "<invalid>", "flonum", "float", 0.200000002980232, 5, "<invalid>", "flonum", "float", 23.0, 5, "obj-18", "umenu", "int", 3, 5, "obj-74", "flonum", "float", 1.0, 5, "obj-76", "flonum", "float", 3.0, 5, "obj-62", "umenu", "int", 27, 5, "obj-89", "flonum", "float", 728.0, 5, "obj-88", "flonum", "float", 0.0, 5, "obj-83", "flonum", "float", 1.0, 5, "obj-72", "flonum", "float", 1.5, 5, "obj-71", "flonum", "float", 20.0, 5, "obj-67", "flonum", "float", 0.300000011920929, 6, "obj-15", "number~", "list", 0.0, 0.0 ]
						}
 ]
				}

			}
 ],
		"lines" : [ 			{
				"patchline" : 				{
					"destination" : [ "obj-30", 0 ],
					"hidden" : 1,
					"source" : [ "obj-13", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-3", 1 ],
					"source" : [ "obj-17", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-48", 0 ],
					"source" : [ "obj-18", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-3", 0 ],
					"source" : [ "obj-19", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-20", 2 ],
					"source" : [ "obj-22", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-24", 0 ],
					"source" : [ "obj-26", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-79", 2 ],
					"source" : [ "obj-28", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-32", 1 ],
					"midpoints" : [ 119.247390999999993, 429.0, 74.554337000000004, 429.0, 74.554337000000004, 380.0, 33.5, 380.0 ],
					"source" : [ "obj-30", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-32", 0 ],
					"midpoints" : [ 92.997390999999993, 418.0, 62.804336999999997, 418.0, 62.804336999999997, 386.0, 15.5, 386.0 ],
					"source" : [ "obj-30", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-32", 0 ],
					"source" : [ "obj-31", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-15", 0 ],
					"source" : [ "obj-34", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-2", 0 ],
					"source" : [ "obj-34", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-20", 1 ],
					"source" : [ "obj-36", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-20", 0 ],
					"source" : [ "obj-41", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-37", 1 ],
					"source" : [ "obj-44", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-37", 0 ],
					"source" : [ "obj-46", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-7", 0 ],
					"source" : [ "obj-47", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-4", 0 ],
					"source" : [ "obj-48", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-3", 2 ],
					"source" : [ "obj-49", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-32", 0 ],
					"source" : [ "obj-5", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-37", 2 ],
					"source" : [ "obj-53", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-20", 3 ],
					"source" : [ "obj-55", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 2 ],
					"source" : [ "obj-57", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 1 ],
					"source" : [ "obj-61", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-39", 0 ],
					"midpoints" : [ 301.176208000000031, 463.0, 226.261703000000011, 463.0 ],
					"source" : [ "obj-62", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 0 ],
					"source" : [ "obj-63", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-69", 2 ],
					"source" : [ "obj-67", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-25", 0 ],
					"order" : 1,
					"source" : [ "obj-7", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-30", 1 ],
					"order" : 2,
					"source" : [ "obj-7", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-30", 0 ],
					"source" : [ "obj-7", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-34", 0 ],
					"source" : [ "obj-7", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-84", 0 ],
					"order" : 0,
					"source" : [ "obj-7", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-69", 1 ],
					"source" : [ "obj-71", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-69", 0 ],
					"source" : [ "obj-72", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-48", 1 ],
					"source" : [ "obj-74", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-48", 2 ],
					"source" : [ "obj-76", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-66", 1 ],
					"source" : [ "obj-79", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-66", 0 ],
					"source" : [ "obj-79", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-86", 2 ],
					"source" : [ "obj-83", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-86", 1 ],
					"source" : [ "obj-88", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-86", 0 ],
					"source" : [ "obj-89", 0 ]
				}

			}
 ],
		"parameters" : 		{
			"obj-30" : [ "live.gain~", "live.gain~", 0 ],
			"obj-7" : [ "rnbo~", "rnbo~", 0 ],
			"parameterbanks" : 			{

			}
,
			"inherited_shortname" : 1
		}
,
		"dependency_cache" : [ 			{
				"name" : "untitled.maxsnap",
				"bootpath" : "~/Documents/Max 8/Snapshots",
				"patcherrelativepath" : "../../../Max 8/Snapshots",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "vs.expodecw.maxpat",
				"bootpath" : "~/Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"patcherrelativepath" : "../../../../Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"type" : "JSON",
				"implicit" : 1
			}
, 			{
				"name" : "vs.gaussw.maxpat",
				"bootpath" : "~/Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"patcherrelativepath" : "../../../../Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"type" : "JSON",
				"implicit" : 1
			}
, 			{
				"name" : "vs.quasigaussw.maxpat",
				"bootpath" : "~/Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"patcherrelativepath" : "../../../../Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"type" : "JSON",
				"implicit" : 1
			}
, 			{
				"name" : "vs.rexpodecw.maxpat",
				"bootpath" : "~/Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"patcherrelativepath" : "../../../../Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"type" : "JSON",
				"implicit" : 1
			}
, 			{
				"name" : "vs.trapezoidw.maxpat",
				"bootpath" : "~/Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"patcherrelativepath" : "../../../../Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"type" : "JSON",
				"implicit" : 1
			}
, 			{
				"name" : "vs.winfunc.maxpat",
				"bootpath" : "~/Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"patcherrelativepath" : "../../../../Library/CloudStorage/Dropbox/projmusic30/max/cipriani Materiale Capitoli Vol 3/Virtual Sound Macros/externals/windows",
				"type" : "JSON",
				"implicit" : 1
			}
 ],
		"autosave" : 0
	}

}
