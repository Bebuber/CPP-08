# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 15:54:36 by bebuber           #+#    #+#              #
#    Updated: 2025/02/26 19:48:35 by bebuber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++17

TARGET = span

SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp	
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean 
	rm -f $(TARGET)

re: fclean all

.PHONY: all fclean clean re